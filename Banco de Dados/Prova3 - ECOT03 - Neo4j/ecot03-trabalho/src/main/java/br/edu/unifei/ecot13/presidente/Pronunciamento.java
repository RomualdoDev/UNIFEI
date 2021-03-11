package br.edu.unifei.ecot13.presidente;

import java.io.Serializable;
import java.util.Date;

import org.neo4j.ogm.annotation.Id;
import org.neo4j.ogm.annotation.NodeEntity;
import org.neo4j.ogm.annotation.typeconversion.DateLong;

import lombok.Data;

@Data
@NodeEntity
public class Pronunciamento implements Serializable{

	private static final long serialVersionUID = 4052339117067739325L;
	@Id
	@DateLong
	private Date dia;
	private String assunto;
		
}
