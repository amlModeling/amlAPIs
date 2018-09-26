// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * caex/SourceDocumentInformationImpl.cpp
 * This file was created by EMF4CPP 1.1.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "SourceDocumentInformation.hpp"
#include <caex/CaexPackage.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

using namespace ::caex;

/*PROTECTED REGION ID(SourceDocumentInformationImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

void SourceDocumentInformation::_initialize()
{
    // Supertypes

    // Rerefences

    /*PROTECTED REGION ID(SourceDocumentInformationImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject SourceDocumentInformation::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::caex::CaexPackage::SOURCEDOCUMENTINFORMATION__LASTWRITINGDATETIME:
    {
        ::ecorecpp::mapping::any_traits < ::type::DateTime
                > ::toAny(_any, m_lastWritingDateTime);
    }
        return _any;
    case ::caex::CaexPackage::SOURCEDOCUMENTINFORMATION__ORIGINID:
    {
        ::ecorecpp::mapping::any_traits < ::type::String
                > ::toAny(_any, m_originID);
    }
        return _any;
    case ::caex::CaexPackage::SOURCEDOCUMENTINFORMATION__ORIGINNAME:
    {
        ::ecorecpp::mapping::any_traits < ::type::String
                > ::toAny(_any, m_originName);
    }
        return _any;
    case ::caex::CaexPackage::SOURCEDOCUMENTINFORMATION__ORIGINPROJECTID:
    {
        ::ecorecpp::mapping::any_traits < ::type::String
                > ::toAny(_any, m_originProjectID);
    }
        return _any;
    case ::caex::CaexPackage::SOURCEDOCUMENTINFORMATION__ORIGINPROJECTTITLE:
    {
        ::ecorecpp::mapping::any_traits < ::type::String
                > ::toAny(_any, m_originProjectTitle);
    }
        return _any;
    case ::caex::CaexPackage::SOURCEDOCUMENTINFORMATION__ORIGINRELEASE:
    {
        ::ecorecpp::mapping::any_traits < ::type::String
                > ::toAny(_any, m_originRelease);
    }
        return _any;
    case ::caex::CaexPackage::SOURCEDOCUMENTINFORMATION__ORIGINVENDOR:
    {
        ::ecorecpp::mapping::any_traits < ::type::String
                > ::toAny(_any, m_originVendor);
    }
        return _any;
    case ::caex::CaexPackage::SOURCEDOCUMENTINFORMATION__ORIGINVENDORURL:
    {
        ::ecorecpp::mapping::any_traits < ::type::String
                > ::toAny(_any, m_originVendorURL);
    }
        return _any;
    case ::caex::CaexPackage::SOURCEDOCUMENTINFORMATION__ORIGINVERSION:
    {
        ::ecorecpp::mapping::any_traits < ::type::String
                > ::toAny(_any, m_originVersion);
    }
        return _any;

    }
    throw "Error";
}

void SourceDocumentInformation::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::caex::CaexPackage::SOURCEDOCUMENTINFORMATION__LASTWRITINGDATETIME:
    {
        ::ecorecpp::mapping::any_traits < ::type::DateTime
                > ::fromAny(_newValue, m_lastWritingDateTime);
    }
        return;
    case ::caex::CaexPackage::SOURCEDOCUMENTINFORMATION__ORIGINID:
    {
        ::ecorecpp::mapping::any_traits < ::type::String
                > ::fromAny(_newValue, m_originID);
    }
        return;
    case ::caex::CaexPackage::SOURCEDOCUMENTINFORMATION__ORIGINNAME:
    {
        ::ecorecpp::mapping::any_traits < ::type::String
                > ::fromAny(_newValue, m_originName);
    }
        return;
    case ::caex::CaexPackage::SOURCEDOCUMENTINFORMATION__ORIGINPROJECTID:
    {
        ::ecorecpp::mapping::any_traits < ::type::String
                > ::fromAny(_newValue, m_originProjectID);
    }
        return;
    case ::caex::CaexPackage::SOURCEDOCUMENTINFORMATION__ORIGINPROJECTTITLE:
    {
        ::ecorecpp::mapping::any_traits < ::type::String
                > ::fromAny(_newValue, m_originProjectTitle);
    }
        return;
    case ::caex::CaexPackage::SOURCEDOCUMENTINFORMATION__ORIGINRELEASE:
    {
        ::ecorecpp::mapping::any_traits < ::type::String
                > ::fromAny(_newValue, m_originRelease);
    }
        return;
    case ::caex::CaexPackage::SOURCEDOCUMENTINFORMATION__ORIGINVENDOR:
    {
        ::ecorecpp::mapping::any_traits < ::type::String
                > ::fromAny(_newValue, m_originVendor);
    }
        return;
    case ::caex::CaexPackage::SOURCEDOCUMENTINFORMATION__ORIGINVENDORURL:
    {
        ::ecorecpp::mapping::any_traits < ::type::String
                > ::fromAny(_newValue, m_originVendorURL);
    }
        return;
    case ::caex::CaexPackage::SOURCEDOCUMENTINFORMATION__ORIGINVERSION:
    {
        ::ecorecpp::mapping::any_traits < ::type::String
                > ::fromAny(_newValue, m_originVersion);
    }
        return;

    }
    throw "Error";
}

::ecore::EBoolean SourceDocumentInformation::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::caex::CaexPackage::SOURCEDOCUMENTINFORMATION__LASTWRITINGDATETIME:
        return ::ecorecpp::mapping::set_traits < ::type::DateTime
                > ::is_set(m_lastWritingDateTime);
    case ::caex::CaexPackage::SOURCEDOCUMENTINFORMATION__ORIGINID:
        return ::ecorecpp::mapping::set_traits < ::type::String
                > ::is_set(m_originID);
    case ::caex::CaexPackage::SOURCEDOCUMENTINFORMATION__ORIGINNAME:
        return ::ecorecpp::mapping::set_traits < ::type::String
                > ::is_set(m_originName);
    case ::caex::CaexPackage::SOURCEDOCUMENTINFORMATION__ORIGINPROJECTID:
        return ::ecorecpp::mapping::set_traits < ::type::String
                > ::is_set(m_originProjectID);
    case ::caex::CaexPackage::SOURCEDOCUMENTINFORMATION__ORIGINPROJECTTITLE:
        return ::ecorecpp::mapping::set_traits < ::type::String
                > ::is_set(m_originProjectTitle);
    case ::caex::CaexPackage::SOURCEDOCUMENTINFORMATION__ORIGINRELEASE:
        return ::ecorecpp::mapping::set_traits < ::type::String
                > ::is_set(m_originRelease);
    case ::caex::CaexPackage::SOURCEDOCUMENTINFORMATION__ORIGINVENDOR:
        return ::ecorecpp::mapping::set_traits < ::type::String
                > ::is_set(m_originVendor);
    case ::caex::CaexPackage::SOURCEDOCUMENTINFORMATION__ORIGINVENDORURL:
        return ::ecorecpp::mapping::set_traits < ::type::String
                > ::is_set(m_originVendorURL);
    case ::caex::CaexPackage::SOURCEDOCUMENTINFORMATION__ORIGINVERSION:
        return ::ecorecpp::mapping::set_traits < ::type::String
                > ::is_set(m_originVersion);

    }
    throw "Error";
}

void SourceDocumentInformation::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error";
}

::ecore::EClass_ptr SourceDocumentInformation::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::caex::CaexPackage_ptr >(::caex::CaexPackage::_instance())->getSourceDocumentInformation();
    return _eclass;
}

