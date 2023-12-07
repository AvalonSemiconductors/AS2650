import java.io.*;
import javax.imageio.ImageIO;
import java.awt.image.BufferedImage;

public class LogoGen {
	private LogoGen() {}
	
	private static void draw(int x1, int y1, int x2, int y2) {
		int minx = Math.min(x1, x2);
		int miny = Math.min(y1, y2);
		int maxx = Math.max(x1, x2);
		int maxy = Math.max(y1, y2);
		System.out.println(String.format("rect %d %d %d %d", minx, miny, maxx, maxy));
	}
	
	public static void main(String[] args) {
		if(args.length < 1) {
			System.err.println("Need to provide image file");
			System.exit(1);
			return;
		}
		int scale = 18;
		int gndx = 15;
		int gndy = 371;
		int powerx = 334;
		int powery = 148;
		int portSize = 100;
		try {
			BufferedImage img = ImageIO.read(new File(args[0]));
			System.out.println("magic");
			System.out.println("tech gf180mcuD");
			System.out.println("timestamp 1638034600");
			System.out.println("<< obsm2 >>");
			draw(0, img.getHeight() * scale, img.getWidth() * scale, 0);
			System.out.println("<< obsm3 >>");
			draw(0, img.getHeight() * scale, img.getWidth() * scale, 0);
			System.out.println("<< metal4 >>");
			for(int i = 0; i < img.getWidth(); i++) {
				for(int j = 0; j < img.getHeight(); j++) {
					int color = img.getRGB(i, img.getHeight() - 1 - j) & 0xFF;
					if(color < 64) continue;
					draw(i * scale, (j + 0) * scale, i * scale + scale, (j + 1) * scale);
				}
			}
			System.out.println("<< labels >>");
			gndy = img.getHeight() - gndy - 1;
			powery = img.getHeight() - powery - 1;
			gndx *= scale;
			gndy *= scale;
			powerx *= scale;
			powery *= scale;
			System.out.println(String.format("flabel metal4 s %d %d %d %d 0 FreeSans 240 0 0 0 vss", gndx, gndy, gndx + portSize, gndy + portSize));
			System.out.println("port 1 nsew ground bidirectional abutment");
			System.out.println(String.format("flabel metal4 s %d %d %d %d 0 FreeSans 240 0 0 0 vdd", powerx, powery, powerx + portSize, powery + portSize));
			System.out.println("port 2 nsew power bidirectional abutment");
			System.out.println("<< end >>");
		}catch(Exception e) {
			e.printStackTrace();
			System.exit(1);
		}
	}
}
