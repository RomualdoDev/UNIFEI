package br.edu.unifei.ecot13.presidente;

import java.io.Serializable;

import org.neo4j.ogm.annotation.GeneratedValue;
import org.neo4j.ogm.annotation.Id;
import org.neo4j.ogm.annotation.NodeEntity;

import lombok.Data;

@Data
@NodeEntity
public class Estado implements Serializable{
	
	private static final long serialVersionUID = 7349215507564151956L;
	@Id
	@GeneratedValue
	private Long id;
	protected Double verba;
	
	public void atualiza(double v){}

}
