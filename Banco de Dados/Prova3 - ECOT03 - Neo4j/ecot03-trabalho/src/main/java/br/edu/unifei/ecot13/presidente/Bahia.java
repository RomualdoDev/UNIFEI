package br.edu.unifei.ecot13.presidente;


import org.neo4j.ogm.annotation.NodeEntity;

import lombok.Data;
import lombok.EqualsAndHashCode;

@Data
@EqualsAndHashCode(callSuper = false)
@NodeEntity
public class Bahia extends Estado {

	private static final long serialVersionUID = 6074836281234948096L;
	private Float precoAcaraje;
	@Override
	public void atualiza(double v) {
		this.verba = v*0.1237;

	}

}
