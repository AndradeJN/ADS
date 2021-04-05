package l4;

import javax.swing.JOptionPane;

public class Ex01 {

   
    static float GetMedia(float n1, float n2, float n3, float n4) {
        
        float media = (n1 + n2 + n3 + n4) / 4;
        return media;
    }

    public static void main(String[] args) {

        float nota1, nota2, nota3, nota4;

        nota1 = Float.parseFloat(JOptionPane.showInputDialog(null, "Digite a primeira nota"));
        nota2 = Float.parseFloat(JOptionPane.showInputDialog(null, "Digite a segunda nota"));
        nota3 = Float.parseFloat(JOptionPane.showInputDialog(null, "Digite a terceira nota"));
        nota4 = Float.parseFloat(JOptionPane.showInputDialog(null, "Digite a quarta nota"));
        
        JOptionPane.showMessageDialog(null, "A media é: " + GetMedia(nota1, nota2, nota3, nota4));
    }
}
