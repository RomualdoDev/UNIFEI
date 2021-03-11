package br.edu.unifei.ecot13.presidente;


import org.neo4j.ogm.annotation.NodeEntity;

import lombok.Data;
import lombok.EqualsAndHashCode;

@Data
@EqualsAndHashCode(callSuper = false)
@NodeEntity
public class RioDeJaneiro extends Estado {

	private static final long serialVersionUID = 6440601733344331629L;
	private Float qtdAssaltos;

	@Override
	public void atualiza(double v) {
		this.verba = v*0.1436;

	}

}
