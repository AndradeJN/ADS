package l4;

import javax.swing.JOptionPane;

public class Ex07 {

    public static void main(String[] args) {
        // TODO code application logic here
        String ler;

        try {
            ler = JOptionPane.showInputDialog("Digite um número");
            int n = Integer.parseInt(ler);
            VerifPrimos(n);
        }
        catch(NumberFormatException ex)
        {
            JOptionPane.showMessageDialog(null, "Digite apenas numeros ");
        }
    }

    private static void VerifPrimos(int n) {
        int count = 0;
        for (int i = 2; i <= n / 2; i++) {
            if (n % i == 0) {
                count++;
                break;
            }
        }
        if (count == 0 && n != 1) {

            System.out.println("É um número primo");
        } else {
            System.out.println("Não é um número primo");
        }
    } 
}
