package br.edu.unifei.ecot13.presidente;

import org.neo4j.ogm.annotation.NodeEntity;

import lombok.Data;
import lombok.EqualsAndHashCode;

@Data
@EqualsAndHashCode(callSuper = false)
@NodeEntity
public class Secretario extends Pessoa {
    
    private static final long serialVersionUID = 5497434341807840656L;
    
    private Integer anosExperienciaArea;
}
