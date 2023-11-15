import javax.imageio.ImageIO;
import java.awt.image.BufferedImage;
import java.io.File;
import java.awt.*;

public class PlacementPreview {
	public static class Macro {
		public int x,y,w,h;
		public Color c;
		public String name;
		public Macro(int x, int y, int w, int h, Color c, String name) {
			this.x = x;
			this.y = y;
			this.w = w;
			this.h = h;
			this.c = c;
			this.name = name;
		}
	}
	
	public static void main(String[] args) {
		BufferedImage img = new BufferedImage(2968, 2968, BufferedImage.TYPE_INT_RGB);
		
		Macro[] macros = new Macro[] {
			new Macro(400, 900, 800, 600, Color.GREEN, "AS2650"), //wrapped_as2650
			new Macro(300, 2400, 300, 352, new Color(240, 128, 32), "Avali Logo"), //avali_logo
		};

		/*Macro[] macros = new Macro[] {
			new Macro(1322, 250, 275, 275, Color.BLACK),
			new Macro(1850, 500, 90, 90, Color.BLACK),
			new Macro(2000, 500, 90, 90, Color.BLACK),
			
			new Macro(167, 2620, 750, 750, Color.GREEN),
			new Macro(1085, 2620, 750, 750, Color.GREEN),
			new Macro(2002, 2620, 750, 750, Color.GREEN),
			
			new Macro(167, 1720, 750, 750, Color.GREEN),
			new Macro(1085, 1720, 750, 750, Color.RED),
			new Macro(2002, 1720, 750, 750, Color.RED),
			
			new Macro(167, 820, 750, 750, Color.RED),
			new Macro(1085, 820, 750, 750, Color.RED),
		};*/

		Graphics2D g = (Graphics2D)img.getGraphics();
		g.setFont(new Font("Dialog", Font.PLAIN, 48));
		for(int i = 0; i < img.getWidth(); i++) for(int j = 0; j < img.getHeight(); j++) img.setRGB(i, j, 0xFFFFFF);
		for(int i = 0; i < macros.length; i++) {
			int x = macros[i].x;
			int y = img.getHeight() - 1 - macros[i].y;
			int w = macros[i].w;
			int h = macros[i].h;
			int rgb = macros[i].c.getRGB();
			
			for(int k = 0; k < 8; k++) {
			
				for(int j = 0; j < w; j++) {
					img.setRGB(x + j, y - k, rgb);
					img.setRGB(x + j, y - h + k, rgb);
				}
				for(int j = 0; j < h; j++) {
					img.setRGB(x + k, y - j, rgb);
					img.setRGB(x + w - 1 - k, y - j, rgb);
				}
				
				g.setColor(macros[i].c);
				g.drawString(macros[i].name, x - 12, y - h - 12);
			}
		}
		
		for(int i = 0; i < img.getWidth(); i++) {
			img.setRGB(i, 0, 0);
			img.setRGB(i, img.getHeight() - 1, 0);
		}
		
		for(int j = 0; j < img.getHeight(); j++) {
			img.setRGB(0, j, 0);
			img.setRGB(img.getWidth() - 1, j, 0);
		}
		
		try {
			ImageIO.write(img, "png", new File("placements.png"));
		}catch(Exception e) {
			e.printStackTrace();
			System.exit(1);
		}
	}
}
