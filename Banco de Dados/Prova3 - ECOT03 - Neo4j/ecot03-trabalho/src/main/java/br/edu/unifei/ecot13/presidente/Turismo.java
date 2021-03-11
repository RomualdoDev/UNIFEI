package br.edu.unifei.ecot13.presidente;


import org.neo4j.ogm.annotation.NodeEntity;

import lombok.Data;
import lombok.EqualsAndHashCode;

@Data
@EqualsAndHashCode(callSuper = false)
@NodeEntity
public class Turismo extends Ministro {

	private static final long serialVersionUID = 4587320652956342205L;
	private Float qtdCidadesTuristicas;
	public void incentivaTurismo() {
		System.out.println("Visite o nosso Brasil!");
	}
}
