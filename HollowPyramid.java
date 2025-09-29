public class DoublePyramidPattern {
    public static void main(String[] args) {
        int rows = 4;

        // Upper part
        for (int i = 1; i <= rows; i++) {
            for (int j = 1; j <= i; j++) System.out.print("* ");
            for (int j = 1; j <= 2 * (rows - i); j++) System.out.print("  ");
            for (int j = 1; j <= i; j++) System.out.print("* ");
            System.out.println();
        }

        // Lower part
        for (int i = rows - 1; i >= 1; i--) {
            for (int j = 1; j <= i; j++) System.out.print("* ");
            for (int j = 1; j <= 2 * (rows - i); j++) System.out.print("  ");
            for (int j = 1; j <= i; j++) System.out.print("* ");
            System.out.println();
        }
    }
}
