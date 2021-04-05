package l3;

import javax.swing.JOptionPane;

public class Ex04 {

    public static void main(String[] args) {
        int x, res;
        String entrada;
        x = 0;
        try {
            entrada = JOptionPane.showInputDialog("Digite o incremento");
            int intervalo = Integer.parseInt(entrada);

            entrada = JOptionPane.showInputDialog("Digite o limite");
            int limite = Integer.parseInt(entrada);

            while (x < limite) {

                x = x + intervalo;
                System.out.println("Numero : " + x);
            }

        } catch (NumberFormatException ex) {
            System.out.println("Digite apenas numeros ");
        }

    }

}
