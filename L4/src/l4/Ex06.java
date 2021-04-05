
package l4;

import javax.swing.JOptionPane;


public class Ex06 {
    static public float GetFatorial(float n1) {
        float x;
        float res;
        res = 0;
        x = n1;
        System.out.print(x);
        while (n1 > 1) {
            res = x * (n1 - 1);
            x = res;
            n1 = --n1;
            System.out.print(" x " + n1); 
        }
        return res;
    }

    public static void main(String[] args) {
        float x, res;
        try {
            //Entrada de valor
            String entrada1 = JOptionPane.showInputDialog("Digite um número");
            x = Integer.parseInt(entrada1);
            System.out.print("O fatorial de " + x + " = "); 
            //Chama o medódo e atribui a res
            res = GetFatorial(x);

            //Exibe o calculo do metódo GetDobro
            System.out.println(" = " + res);

        } catch (NumberFormatException ex) {
            System.out.println("Digite apenas numeros ");
        }

    }
}
