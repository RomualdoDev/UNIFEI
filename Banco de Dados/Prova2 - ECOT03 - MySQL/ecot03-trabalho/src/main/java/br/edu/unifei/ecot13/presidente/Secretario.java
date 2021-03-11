package br.edu.unifei.ecot13.presidente;

import javax.persistence.CascadeType;
import javax.persistence.Entity;
import javax.persistence.OneToOne;

import lombok.Data;
import lombok.EqualsAndHashCode;

@Data
@EqualsAndHashCode(callSuper = false)
@Entity
public class Secretario extends Pessoa {
    
    private static final long serialVersionUID = 5497434341807840656L;
    @OneToOne(cascade=CascadeType.ALL)
    private Ministro ministro;
}
