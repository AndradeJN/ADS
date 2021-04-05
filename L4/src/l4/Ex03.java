package l4;

import javax.swing.JOptionPane;

public class Ex03 {

    static float convGrau(float a) {

        float radiano;
        final float pi = 3.1416F;
        radiano = (a * pi) / 180;
        return radiano;
    }

    static void exibe(float r) {
        JOptionPane.showMessageDialog(null, "O grau convertido em radiano é: " + r);

    }

    public static void main(String[] args) {

        float grau = Float.parseFloat(JOptionPane.showInputDialog(null, "Digite o grau a ser convertido em radiano"));
        float convert = convGrau(grau);
        exibe(convert);
    }
}
