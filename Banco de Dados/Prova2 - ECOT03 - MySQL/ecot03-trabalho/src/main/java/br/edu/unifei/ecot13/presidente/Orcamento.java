package br.edu.unifei.ecot13.presidente;

import javax.persistence.Entity;
import lombok.Data;
import lombok.EqualsAndHashCode;

@Data
@EqualsAndHashCode(callSuper = false)
@Entity
public class Orcamento extends DistribuicaoDinheiro {

	private static final long serialVersionUID = 8010140763939131684L;
	private double mensal;
	
	
	public void setMensal(double mensal) {
		notifica(mensal);
		this.mensal = mensal;
	}

}
