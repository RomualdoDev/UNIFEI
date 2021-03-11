package br.edu.unifei.ecot13.presidente;
import javax.persistence.Entity;

import lombok.Data;
import lombok.EqualsAndHashCode;

@Data
@EqualsAndHashCode(callSuper = false)
@Entity
public class Cidadania extends Ministro {
	
	private static final long serialVersionUID = -6352086316487366663L;
	private float qtdEventosSociais;
	public void anunciaAuxilio() {
		System.out.println("O auxilio emergencial ir� durar at� o final do ano!");
	}
}
