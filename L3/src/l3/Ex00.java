
package l3;

import javax.swing.JOptionPane;

public class Ex00 {
    public static void main(String[] args) {
        try {
            String ler;

            ler = JOptionPane.showInputDialog("Digite o inicio do intervalo");
            int inicio = Integer.parseInt(ler);

            ler = JOptionPane.showInputDialog("Digite o fim do intervalo");
            int fim = Integer.parseInt(ler);

            while (inicio <= fim - 1) {
                inicio++;
                if (inicio % 2 == 0) {
                    System.out.println(inicio);
                }
            }
        } catch (NumberFormatException ex) {
            JOptionPane.showMessageDialog(null, "Digite apenas numeros ");
        }
    }
}
