package br.edu.unifei.ecot13.presidente;


import org.neo4j.ogm.annotation.NodeEntity;

import lombok.Data;
import lombok.EqualsAndHashCode;

@Data
@EqualsAndHashCode(callSuper = false)
@NodeEntity
public class Cultura extends Ministro {
	
	private static final long serialVersionUID = 2438167728163072382L;
	private Float qtdEventosAnuais;
	
	public void criaEventos() {
		System.out.println("Temos que incentivar o a cultura local de cada estado!");
	}
}
