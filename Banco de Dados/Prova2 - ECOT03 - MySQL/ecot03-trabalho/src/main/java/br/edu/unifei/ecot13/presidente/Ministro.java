package br.edu.unifei.ecot13.presidente;

import java.util.Date;

import javax.persistence.CascadeType;
import javax.persistence.Entity;
import javax.persistence.OneToOne;
import javax.persistence.Temporal;
import javax.persistence.TemporalType;

import lombok.Data;
import lombok.EqualsAndHashCode;

@Data
@EqualsAndHashCode(callSuper = false)
@Entity
public class Ministro extends Pessoa {

	private static final long serialVersionUID = 5746746221354793079L;

	@Temporal(TemporalType.DATE)
	private Date dataNomeacao;
	@OneToOne(cascade=CascadeType.ALL)
	private Secretario secretario;
	
	public void contrataSecretario(Secretario se) {
		secretario = se;
	}

	public void mostraSecretario() {
		System.out.println(secretario.getClass().getSimpleName() +" da " + secretario.getMinistro().getClass().getSimpleName() +  " = " + secretario.getNome());
	}
}
