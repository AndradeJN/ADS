package l4;

import javax.swing.JOptionPane;

public class Ex00 {

    static public float GetDobro(float y) {
        float notafinal = (y * 2);
        return notafinal;
    }

    public static void main(String[] args) {

        float x;
        String entrada;

        try {
            entrada = JOptionPane.showInputDialog("Digite um valor");
            x = Integer.parseInt(entrada);

            System.out.println("O dobro de " + x + "  é: " + GetDobro(x));

        } catch (NumberFormatException ex) {
            System.out.println("Digite apenas numeros ");
        }
    }
}
