package br.edu.unifei.ecot13.presidente;

import org.neo4j.ogm.annotation.NodeEntity;

import lombok.Data;
import lombok.EqualsAndHashCode;

@Data
@EqualsAndHashCode(callSuper = false)
@NodeEntity
public class Cidadania extends Ministro {
	
	private static final long serialVersionUID = -6352086316487366663L;
	private Float qtdEventosSociais;
	public void anunciaAuxilio() {
		System.out.println("O auxilio emergencial ir� durar at� o final do ano!");
	}
}
