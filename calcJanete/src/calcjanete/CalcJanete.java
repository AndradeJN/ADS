package calcjanete;

import javax.swing.JOptionPane;

public class CalcJanete {
    
    static void Executar(){
        
        int op = Integer.parseInt(JOptionPane.showInputDialog(null, "Selecione uma opção\n1 - Calculo ml\n2 - Calculo mg: "));
        switch(op){
            case 1: CalcMedicamento();
                break;
        }
        
    }
    static void CalcMedicamento(){
        
        float unidade, prescricao, medida, resultado;
        
        prescricao = Float.parseFloat(JOptionPane.showInputDialog(null, "Prescrição: "));
        unidade = Float.parseFloat(JOptionPane.showInputDialog(null, "Unidades: "));
        medida = Float.parseFloat(JOptionPane.showInputDialog(null, "Medida: "));
        resultado = prescricao * medida / (unidade / medida);        
        JOptionPane.showMessageDialog(null, "Resposta " + resultado  );
    }

    public static void main(String[] args) {
        
            Executar();
      }
    
}
