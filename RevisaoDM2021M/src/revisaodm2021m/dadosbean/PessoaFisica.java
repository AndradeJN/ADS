/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package revisaodm2021m.dadosbean;

/**
 *
 * @author User
 */
public class PessoaFisica {
    
    int id;
    String cpf;
    String end;

    public PessoaFisica(int id) {
        this.id = id;
    }

    public PessoaFisica(String cpf) {
        this.cpf = cpf;
    }

    public PessoaFisica(String cpf, String end) {
        this.cpf = cpf;
        this.end = end;
    }

    public PessoaFisica(int id, String cpf, String end) {
        this.id = id;
        this.cpf = cpf;
        this.end = end;
    }

    public int getId() {
        return id;
    }

    public void setId(int id) {
        this.id = id;
    }

    public String getCpf() {
        return cpf;
    }

    public void setCpf(String cpf) {
        this.cpf = cpf;
    }

    public String getEnd() {
        return end;
    }

    public void setEnd(String end) {
        this.end = end;
    }

    @Override
    public String toString() {
        return "PessoaFisica{" + "id=" + id + ", cpf=" + cpf + ", end=" + end + '}';
    }
    
}
