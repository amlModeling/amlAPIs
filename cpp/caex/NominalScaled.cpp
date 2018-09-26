// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * caex/NominalScaled.cpp
 * This file was created by EMF4CPP 1.1.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "NominalScaled.hpp"
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "caex/CaexPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

using namespace ::caex;

// Default constructor
NominalScaled::NominalScaled()
{

    /*PROTECTED REGION ID(NominalScaledImpl__NominalScaledImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

NominalScaled::~NominalScaled()
{
}

/*PROTECTED REGION ID(NominalScaled.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

// Attributes
std::vector< ::type::String > const& NominalScaled::getRequiredValue() const
{
    return m_requiredValue;
}

void NominalScaled::setRequiredValue(
        std::vector< ::type::String > _requiredValue)
{
#ifdef ECORECPP_NOTIFICATION_API
    std::vector< ::type::String > _old_requiredValue = m_requiredValue;
#endif
    m_requiredValue = _requiredValue;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                (::ecore::EObject_ptr) this,
                (::ecore::EStructuralFeature_ptr) ::caex::CaexPackage::_instance()->getNominalScaled__requiredValue(),
                _old_requiredValue,
                m_requiredValue
        );
        eNotify(&notification);
    }
#endif
}

void NominalScaled::addRequiredValue(
        ::type::String const& _new_element_in_requiredValue)
{
    m_requiredValue.push_back(_new_element_in_requiredValue);
}

void NominalScaled::setRequiredValueAt(size_t _position,
        ::type::String const& _new_element_in_requiredValue)
{
    if (_position >= m_requiredValue.size())
        m_requiredValue.resize(_position + 1, 0);

    m_requiredValue[_position] = _new_element_in_requiredValue;
}

void NominalScaled::deleteRequiredValueAt(size_t _position)
{
    if (_position >= m_requiredValue.size())
        throw "Attribute counter out of bounds!";

    // TODO: This is not actually quite true
    if (_position == m_requiredValue.size() - 1)
        m_requiredValue.resize(_position);
}

// References

