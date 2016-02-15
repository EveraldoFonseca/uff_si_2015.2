package br.uff.si.poo.consultorio.classes;

import br.uff.si.poo.consultorio.interfaces.Usuario;

public class Atendente extends Pessoa implements Usuario{
    public Atendente() {
        super();
    }

    @Override
    public String getLogin() {
        // TODO Implement this method
        return null;
    }

    @Override
    public void setLogin(String login) {
        // TODO Implement this method
    }

    @Override
    public String getSenha() {
        // TODO Implement this method
        return null;
    }

    @Override
    public void setSenha(String senha) {
        // TODO Implement this method
    }

    @Override
    public boolean logar() {
        // TODO Implement this method
        return false;
    }
}
