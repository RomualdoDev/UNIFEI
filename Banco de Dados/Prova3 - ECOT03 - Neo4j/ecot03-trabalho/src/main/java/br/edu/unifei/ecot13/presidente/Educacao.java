package br.edu.unifei.ecot13.presidente;


import org.neo4j.ogm.annotation.NodeEntity;

import lombok.Data;
import lombok.EqualsAndHashCode;

@Data
@EqualsAndHashCode(callSuper = false)
@NodeEntity
public class Educacao extends Ministro {
	private static final long serialVersionUID = 5600589776865786515L;
	private Float qtdEscolas;

	public void requisitaInsumosEducacionais() {
		System.out.println("Quero mais dinheiro para a merenda!");
	}
}
