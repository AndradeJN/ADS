
package l3;

import javax.swing.JOptionPane;

public class Ex02 {
    public static void main(String[] args) {

        int i, number, count;
        String ler;

        try {
            ler = JOptionPane.showInputDialog("Digite o limite inferior");
            int n1 = Integer.parseInt(ler);
            ler = JOptionPane.showInputDialog("Digite o limite superior");
            int n2 = Integer.parseInt(ler);

            for (number = n1; number <= n2; number++) {
                count = 0;
                for (i = 2; i <= number/2; i++) {
                    if (number % i == 0) {
                        count++;
                        break;
                    }
                }
                if (count == 0 && number != 1) {
                    System.out.println(number);
                }
            }
        } catch (NumberFormatException ex) {
            JOptionPane.showMessageDialog(null, "Digite apenas numeros ");
        }
    }
}
