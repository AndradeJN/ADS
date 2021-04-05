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

// finalizar o modelo de bean
// criar um ManterDepartamento;
// criar um ControleDepartamento;
// criar um DaoDepartamento;


public class Departamento {
    
    int id;
    String nome;
    String descricao;
    String centrocusto;

    public Departamento(int id) {
        this.id = id;
    }

    public Departamento(String nome) {
        this.nome = nome;
    }
    
    public Departamento(String nome, String descricao, String centrocusto) {
        this.nome = nome;
        this.descricao = descricao;
        this.centrocusto = centrocusto;
    }

    public Departamento(int id, String nome, String descricao, String centrocusto) {
        this.id = id;
        this.nome = nome;
        this.descricao = descricao;
        this.centrocusto = centrocusto;
    }

    public int getId() {
        return id;
    }

    public void setId(int id) {
        this.id = id;
    }

    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public String getDescricao() {
        return descricao;
    }

    public void setDescricao(String descricao) {
        this.descricao = descricao;
    }

    public String getCentrocusto() {
        return centrocusto;
    }

    public void setCentrocusto(String centrocusto) {
        this.centrocusto = centrocusto;
    }

    @Override
    public String toString() {
        return "Departamento{" + "id=" + id + ", nome=" + nome + ", descricao=" + descricao + ", centrocusto=" + centrocusto + '}';
    }
    
    
}
