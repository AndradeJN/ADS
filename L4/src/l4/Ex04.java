
package l4;

import javax.swing.JOptionPane;


public class Ex04 {

    public static void GetComparador(float x, float y) {

        if (x > y) {
            System.out.println("O maior valor desta comparação é: " + x);

        } else if (y > x) {
            System.out.println("O maior valor desta comparação é: " + y);
        } else {
            System.out.println("Os dois valores são iguais ");
        }
    }

    public static void main(String[] args) {
        float x, y;

        try {
            //Entrada de valores
            String entrada1 = JOptionPane.showInputDialog("Digite o valor 1");
            x = Integer.parseInt(entrada1);

            String entrada2 = JOptionPane.showInputDialog("Digite o valor 2");
            y = Integer.parseInt(entrada2);

            //Chama o medódo e atribui a res
            GetComparador(x, y);

        } catch (NumberFormatException ex) {
            System.out.println("Digite apenas numeros ");
        }

    }
}
