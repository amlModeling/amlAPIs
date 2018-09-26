// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * caex/InternalElement.hpp
 * This file was created by EMF4CPP 1.1.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef CAEX_INTERNALELEMENT_HPP
#define CAEX_INTERNALELEMENT_HPP

#include <caex_forward.hpp>
#include <ecorecpp/mapping_forward.hpp>

#include <type_forward.hpp>
#include <caex/SystemUnitClass.hpp>

/*PROTECTED REGION ID(InternalElement_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace caex
{

    class InternalElement: public virtual ::caex::SystemUnitClass
    {
    public:
        InternalElement();

        virtual ~InternalElement();

        virtual void _initialize();

        // Operations

        // Attributes
        ::type::String getRefBaseSystemUnitPath() const;
        void setRefBaseSystemUnitPath(::type::String _refBaseSystemUnitPath);

        // References
        ::ecorecpp::mapping::EList< ::caex::RoleRequirements >& getRoleRequirements();

        ::caex::SystemUnitClass_ptr getBaseSystemUnit();
        void setBaseSystemUnit(::caex::SystemUnitClass_ptr _baseSystemUnit);

        /*PROTECTED REGION ID(InternalElement) START*/
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

        /*PROTECTED REGION ID(InternalElementImpl) START*/
        // Please, enable the protected region if you add manually written code.
        // To do this, add the keyword ENABLED before START.
        /*PROTECTED REGION END*/

    protected:
        // Attributes

        ::type::String m_refBaseSystemUnitPath;

        // References

        ::ecorecpp::mapping::out_ptr<
                ::ecorecpp::mapping::EList< ::caex::RoleRequirements > > m_roleRequirements;

        ::caex::SystemUnitClass_ptr m_baseSystemUnit;

    };

} // caex

#endif // CAEX_INTERNALELEMENT_HPP

