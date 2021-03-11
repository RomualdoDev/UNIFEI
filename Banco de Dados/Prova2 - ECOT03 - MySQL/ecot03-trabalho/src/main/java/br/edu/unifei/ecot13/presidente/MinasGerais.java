package br.edu.unifei.ecot13.presidente;

import javax.persistence.Entity;

import lombok.Data;
import lombok.EqualsAndHashCode;

@Data
@EqualsAndHashCode(callSuper = false)
@Entity
public class MinasGerais extends Estado {

	private static final long serialVersionUID = -8536724998938113040L;
	private float precoPaoDeQueijo;
	
	@Override
	public void atualiza(double v) {
		this.verba = v*0.1761;
		
	}

}
