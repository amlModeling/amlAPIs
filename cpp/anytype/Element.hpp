// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * anytype/Element.hpp
 * This file was created by EMF4CPP 1.1.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef ANYTYPE_ELEMENT_HPP
#define ANYTYPE_ELEMENT_HPP

#include <anytype_forward.hpp>
#include <ecorecpp/mapping_forward.hpp>

#include <ecore_forward.hpp>

#include <ecore/EObject.hpp>

/*PROTECTED REGION ID(Element_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace anytype
{

    class Element: public virtual ::ecore::EObject

    {
    public:
        Element();

        virtual ~Element();

        virtual void _initialize();

        // Operations

        // Attributes
        ::ecore::EString const& getName() const;
        void setName(::ecore::EString const& _name);

        ::ecore::EString const& getValue() const;
        void setValue(::ecore::EString const& _value);

        // References

        /*PROTECTED REGION ID(Element) START*/
        // Please, enable the protected region if you add manually written code.
        // To do this, add the keyword ENABLED before START.
        /*PROTECTED REGION END*/

        // EObjectImpl
        virtual ::ecore::EJavaObject eGet(::ecore::EInt _featureID,
                ::ecore::EBoolean _resolve);
        virtual void eSet(::ecore::EInt _featureID,
                ::ecore::EJavaObject const& _newValue);
        virtual ::ecore::EBoolean eIsSet(::ecore::EInt _featureID);
        virtual void eUnset(::ecore::EInt _featureID);
        virtual ::ecore::EClass_ptr _eClass();

        /*PROTECTED REGION ID(ElementImpl) START*/
        // Please, enable the protected region if you add manually written code.
        // To do this, add the keyword ENABLED before START.
        /*PROTECTED REGION END*/

    protected:
        // Attributes

        ::ecore::EString m_name;

        ::ecore::EString m_value;

        // References

    };

} // anytype

#endif // ANYTYPE_ELEMENT_HPP

