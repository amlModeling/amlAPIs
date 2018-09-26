// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * caex/DocumentRoot.hpp
 * This file was created by EMF4CPP 1.1.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef CAEX_DOCUMENTROOT_HPP
#define CAEX_DOCUMENTROOT_HPP

#include <caex_forward.hpp>
#include <ecorecpp/mapping_forward.hpp>

#include <ecore_forward.hpp>

#include <ecore/EObject.hpp>

/*PROTECTED REGION ID(DocumentRoot_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace caex
{

    class DocumentRoot: public virtual ::ecore::EObject

    {
    public:
        DocumentRoot();

        virtual ~DocumentRoot();

        virtual void _initialize();

        // Operations

        // Attributes
        std::vector< ::ecore::EFeatureMapEntry > const& getMixed() const;
        void setMixed(std::vector< ::ecore::EFeatureMapEntry > _mixed);

        void addMixed(::ecore::EFeatureMapEntry const& _new_element_in_mixed);
        void setMixedAt(size_t _position,
                ::ecore::EFeatureMapEntry const& _new_element_in_mixed);
        void deleteMixedAt(size_t _position);

        // References
        ::ecorecpp::mapping::EList< ::ecore::EStringToStringMapEntry >& getXMLNSPrefixMap();

        ::ecorecpp::mapping::EList< ::ecore::EStringToStringMapEntry >& getXSISchemaLocation();

        ::ecorecpp::mapping::EList< ::caex::CAEXFile >& getCAEXFile();

        /*PROTECTED REGION ID(DocumentRoot) START*/
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

        /*PROTECTED REGION ID(DocumentRootImpl) START*/
        // Please, enable the protected region if you add manually written code.
        // To do this, add the keyword ENABLED before START.
        /*PROTECTED REGION END*/

    protected:
        // Attributes

        std::vector< ::ecore::EFeatureMapEntry > m_mixed;

        // References

        ::ecorecpp::mapping::out_ptr<
                ::ecorecpp::mapping::EList< ::ecore::EStringToStringMapEntry > > m_xMLNSPrefixMap;

        ::ecorecpp::mapping::out_ptr<
                ::ecorecpp::mapping::EList< ::ecore::EStringToStringMapEntry > > m_xSISchemaLocation;

        ::ecorecpp::mapping::out_ptr<
                ::ecorecpp::mapping::EList< ::caex::CAEXFile > > m_cAEXFile;

    };

} // caex

#endif // CAEX_DOCUMENTROOT_HPP

