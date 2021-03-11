package br.edu.unifei.ecot13.presidente;


import org.neo4j.ogm.annotation.NodeEntity;

import lombok.Data;
import lombok.EqualsAndHashCode;

@Data
@EqualsAndHashCode(callSuper = false)
@NodeEntity
public class Pernambuco extends Estado {

	private static final long serialVersionUID = 6390199902633448753L;
	private Float qtdPraias;

	@Override
	public void atualiza(double v) {
		this.verba = v*0.795;

	}

}
