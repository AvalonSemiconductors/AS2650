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
			new Macro(300, 1450, 1050, 700, Color.GREEN, "AS2650"), //wrapped_as2650
			new Macro(300, 2450, 300, 352, new Color(240, 128, 32), "Avali Logo"), //avali_logo
			new Macro(2400, 1900, 250, 250, Color.RED, "GPIOs"), //gpios
			new Macro(2350, 2250, 425, 425, Color.BLUE, "Timers & PWM"), //timers
			new Macro(800, 2500, 275, 275, Color.ORANGE, "Serial Ports"), //serial_ports
			new Macro(2400, 1500, 210, 210, new Color(128, 64, 255), "Boot ROM"), //boot_rom
			new Macro(1500, 2000, 750, 750, new Color(245/*244*/, 130, 133), "SID"), //sid_top
			new Macro(300, 800, 1100, 250, new Color(100, 200, 178), "RAM Controller"), //ram_controller
			new Macro(300, 200, 445, 496, new Color(100, 200, 178), "RAM0"), //sram0
			new Macro(800, 200, 445, 496, new Color(100, 200, 178), "RAM1"), //sram1
			new Macro(1300, 200, 445, 496, new Color(100, 200, 178), "RAM2"), //sram2
			new Macro(1800, 200, 445, 496, new Color(100, 200, 178), "RAM3"), //sram3
			new Macro(2300, 200, 445, 496, new Color(100, 200, 178), "RAM4"), //sram4
			new Macro(2350, 800, 445, 496, new Color(100, 200, 178), "RAM5"), //sram5
			new Macro(1800, 800, 445, 496, new Color(100, 200, 178), "RAM6"), //sram6
			new Macro(1500, 1400, 445, 496, new Color(100, 200, 178), "RAM7"), //sram7
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
