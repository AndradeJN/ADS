
package l3;

import javax.swing.JOptionPane;

public class Ex01 {
    public static void main(String[] args) {
        try {
            String ler = JOptionPane.showInputDialog("Digite um numero");
            int n = Integer.parseInt(ler);

            int v1 = 1;
            int v2 = 1;
            int r = 1;
            int i = 0;
            while (i < n) {

                System.out.print(r);
                r = v2;
                v2 = v1 + v2;
                v1 = r;
                i++;
                if (i < n) {
                    System.out.print(",");
                }
            }
            System.out.print("\n");
        } catch (NumberFormatException ex) {
            JOptionPane.showMessageDialog(null, "Digite apenas numeros ");
        }
    }
}
