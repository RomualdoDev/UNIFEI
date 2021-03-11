package br.edu.unifei.ecot13.presidente;

import java.io.Serializable;
import java.util.Date;

import javax.persistence.Entity;
import javax.persistence.Id;
import javax.persistence.Temporal;
import javax.persistence.TemporalType;

import lombok.Data;

@Data
@Entity
public class Pronunciamento implements Serializable{

	private static final long serialVersionUID = 4052339117067739325L;
	@Id
	@Temporal(TemporalType.DATE)
	private Date dia;
	private String assunto;
		
}
