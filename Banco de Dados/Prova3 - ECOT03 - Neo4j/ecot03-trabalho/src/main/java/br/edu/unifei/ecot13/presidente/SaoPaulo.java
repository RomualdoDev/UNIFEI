package br.edu.unifei.ecot13.presidente;


import org.neo4j.ogm.annotation.NodeEntity;

import lombok.Data;
import lombok.EqualsAndHashCode;

@Data
@EqualsAndHashCode(callSuper = false)
@NodeEntity
public class SaoPaulo extends Estado {
	
	private static final long serialVersionUID = -3917299996721906836L;
	private Float qtdAcidentesTransito;

	@Override
	public void atualiza(double v) {
		this.verba = v*0.3820;
	}

}
