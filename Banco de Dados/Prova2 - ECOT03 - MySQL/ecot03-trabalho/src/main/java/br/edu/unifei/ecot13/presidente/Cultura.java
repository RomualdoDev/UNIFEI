package br.edu.unifei.ecot13.presidente;

import javax.persistence.Entity;

import lombok.Data;
import lombok.EqualsAndHashCode;

@Data
@EqualsAndHashCode(callSuper = false)
@Entity
public class Cultura extends Ministro {
	
	private static final long serialVersionUID = 2438167728163072382L;
	private float qtdEventosAnuais;
	
	public void criaEventos() {
		System.out.println("Temos que incentivar o a cultura local de cada estado!");
	}
}
