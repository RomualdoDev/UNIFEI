package br.edu.unifei.ecot13.presidente;


import org.neo4j.ogm.annotation.NodeEntity;

import lombok.Data;
import lombok.EqualsAndHashCode;

@Data
@EqualsAndHashCode(callSuper = false)
@NodeEntity
public class Amazonas extends Estado {

	private static final long serialVersionUID = -5360997043850323805L;
	private Float taxaDesmatamento;
	
	@Override
	public void atualiza(double v) {
		this.verba = v*0.951;

	}

}
