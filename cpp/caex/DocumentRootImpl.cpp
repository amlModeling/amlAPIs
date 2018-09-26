// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * caex/DocumentRootImpl.cpp
 * This file was created by EMF4CPP 1.1.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "DocumentRoot.hpp"
#include <caex/CaexPackage.hpp>
#include <ecore/EStringToStringMapEntry.hpp>
#include <caex/CAEXFile.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

using namespace ::caex;

/*PROTECTED REGION ID(DocumentRootImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

void DocumentRoot::_initialize()
{
    // Supertypes

    // Rerefences
    for (size_t i = 0; i < m_xMLNSPrefixMap->size(); i++)
    {
        (*m_xMLNSPrefixMap)[i]->_initialize();
        (*m_xMLNSPrefixMap)[i]->_setEContainer(this,
                ::caex::CaexPackage::_instance()->getDocumentRoot__xMLNSPrefixMap());
    }
    for (size_t i = 0; i < m_xSISchemaLocation->size(); i++)
    {
        (*m_xSISchemaLocation)[i]->_initialize();
        (*m_xSISchemaLocation)[i]->_setEContainer(this,
                ::caex::CaexPackage::_instance()->getDocumentRoot__xSISchemaLocation());
    }
    for (size_t i = 0; i < m_cAEXFile->size(); i++)
    {
        (*m_cAEXFile)[i]->_initialize();
        (*m_cAEXFile)[i]->_setEContainer(this,
                ::caex::CaexPackage::_instance()->getDocumentRoot__cAEXFile());
    }

    /*PROTECTED REGION ID(DocumentRootImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject DocumentRoot::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::caex::CaexPackage::DOCUMENTROOT__MIXED:
    {
        std::vector < ::ecorecpp::mapping::any > _anys(m_mixed.size());
        for (size_t _i = 0; _i < m_mixed.size(); _i++)
            ::ecorecpp::mapping::any_traits < ::ecore::EFeatureMapEntry
                    > ::toAny(_anys[_i], m_mixed[_i]);
        _any = _anys;
    }
        return _any;
    case ::caex::CaexPackage::DOCUMENTROOT__XMLNSPREFIXMAP:
    {
        _any = m_xMLNSPrefixMap->asEListOf< ::ecore::EObject >();
    }
        return _any;
    case ::caex::CaexPackage::DOCUMENTROOT__XSISCHEMALOCATION:
    {
        _any = m_xSISchemaLocation->asEListOf< ::ecore::EObject >();
    }
        return _any;

    }
    throw "Error";
}

void DocumentRoot::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::caex::CaexPackage::DOCUMENTROOT__MIXED:
    {
        ::ecore::EFeatureMapEntry _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EFeatureMapEntry
                > ::fromAny(_newValue, _t0);
        ::caex::DocumentRoot::addMixed(_t0);
    }
        return;
    case ::caex::CaexPackage::DOCUMENTROOT__XMLNSPREFIXMAP:
    {
        ::ecorecpp::mapping::EList_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecorecpp::mapping::EList_ptr > (_newValue);
        ::caex::DocumentRoot::getXMLNSPrefixMap().clear();
        ::caex::DocumentRoot::getXMLNSPrefixMap().insert_all(*_t0);
    }
        return;
    case ::caex::CaexPackage::DOCUMENTROOT__XSISCHEMALOCATION:
    {
        ::ecorecpp::mapping::EList_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecorecpp::mapping::EList_ptr > (_newValue);
        ::caex::DocumentRoot::getXSISchemaLocation().clear();
        ::caex::DocumentRoot::getXSISchemaLocation().insert_all(*_t0);
    }
        return;

    }
    throw "Error";
}

::ecore::EBoolean DocumentRoot::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::caex::CaexPackage::DOCUMENTROOT__MIXED:
        return m_mixed.size();
    case ::caex::CaexPackage::DOCUMENTROOT__XMLNSPREFIXMAP:
        return m_xMLNSPrefixMap && m_xMLNSPrefixMap->size();
    case ::caex::CaexPackage::DOCUMENTROOT__XSISCHEMALOCATION:
        return m_xSISchemaLocation && m_xSISchemaLocation->size();
    case ::caex::CaexPackage::DOCUMENTROOT__CAEXFILE:
        return m_cAEXFile && m_cAEXFile->size();

    }
    throw "Error";
}

void DocumentRoot::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error";
}

::ecore::EClass_ptr DocumentRoot::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::caex::CaexPackage_ptr >(::caex::CaexPackage::_instance())->getDocumentRoot();
    return _eclass;
}

