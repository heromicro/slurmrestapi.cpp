/**
 * Slurm Rest API
 * API to access and control Slurm.
 *
 * The version of the OpenAPI document: 0.0.39
 * Contact: sales@schedmd.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 6.6.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "slurmrestapi/model/V0_0_39_account.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



V0_0_39_account::V0_0_39_account()
{
    m_AssociationsIsSet = false;
    m_CoordinatorsIsSet = false;
    m_Description = utility::conversions::to_string_t("");
    m_DescriptionIsSet = false;
    m_Name = utility::conversions::to_string_t("");
    m_NameIsSet = false;
    m_Organization = utility::conversions::to_string_t("");
    m_OrganizationIsSet = false;
    m_FlagsIsSet = false;
}

V0_0_39_account::~V0_0_39_account()
{
}

void V0_0_39_account::validate()
{
    // TODO: implement validation
}

web::json::value V0_0_39_account::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_AssociationsIsSet)
    {
        val[utility::conversions::to_string_t(U("associations"))] = ModelBase::toJson(m_Associations);
    }
    if(m_CoordinatorsIsSet)
    {
        val[utility::conversions::to_string_t(U("coordinators"))] = ModelBase::toJson(m_Coordinators);
    }
    if(m_DescriptionIsSet)
    {
        val[utility::conversions::to_string_t(U("description"))] = ModelBase::toJson(m_Description);
    }
    if(m_NameIsSet)
    {
        val[utility::conversions::to_string_t(U("name"))] = ModelBase::toJson(m_Name);
    }
    if(m_OrganizationIsSet)
    {
        val[utility::conversions::to_string_t(U("organization"))] = ModelBase::toJson(m_Organization);
    }
    if(m_FlagsIsSet)
    {
        val[utility::conversions::to_string_t(U("flags"))] = ModelBase::toJson(m_Flags);
    }

    return val;
}

bool V0_0_39_account::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("associations"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("associations")));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<V0_0_39_assoc_short>> refVal_setAssociations;
            ok &= ModelBase::fromJson(fieldValue, refVal_setAssociations);
            setAssociations(refVal_setAssociations);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("coordinators"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("coordinators")));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<V0_0_39_coord>> refVal_setCoordinators;
            ok &= ModelBase::fromJson(fieldValue, refVal_setCoordinators);
            setCoordinators(refVal_setCoordinators);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("description"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("description")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setDescription;
            ok &= ModelBase::fromJson(fieldValue, refVal_setDescription);
            setDescription(refVal_setDescription);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("name"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("name")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setName;
            ok &= ModelBase::fromJson(fieldValue, refVal_setName);
            setName(refVal_setName);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("organization"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("organization")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setOrganization;
            ok &= ModelBase::fromJson(fieldValue, refVal_setOrganization);
            setOrganization(refVal_setOrganization);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("flags"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("flags")));
        if(!fieldValue.is_null())
        {
            std::vector<utility::string_t> refVal_setFlags;
            ok &= ModelBase::fromJson(fieldValue, refVal_setFlags);
            setFlags(refVal_setFlags);
        }
    }
    return ok;
}

void V0_0_39_account::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_AssociationsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("associations")), m_Associations));
    }
    if(m_CoordinatorsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("coordinators")), m_Coordinators));
    }
    if(m_DescriptionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("description")), m_Description));
    }
    if(m_NameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("name")), m_Name));
    }
    if(m_OrganizationIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("organization")), m_Organization));
    }
    if(m_FlagsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("flags")), m_Flags));
    }
}

bool V0_0_39_account::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("associations"))))
    {
        std::vector<std::shared_ptr<V0_0_39_assoc_short>> refVal_setAssociations;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("associations"))), refVal_setAssociations );
        setAssociations(refVal_setAssociations);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("coordinators"))))
    {
        std::vector<std::shared_ptr<V0_0_39_coord>> refVal_setCoordinators;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("coordinators"))), refVal_setCoordinators );
        setCoordinators(refVal_setCoordinators);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("description"))))
    {
        utility::string_t refVal_setDescription;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("description"))), refVal_setDescription );
        setDescription(refVal_setDescription);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("name"))))
    {
        utility::string_t refVal_setName;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("name"))), refVal_setName );
        setName(refVal_setName);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("organization"))))
    {
        utility::string_t refVal_setOrganization;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("organization"))), refVal_setOrganization );
        setOrganization(refVal_setOrganization);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("flags"))))
    {
        std::vector<utility::string_t> refVal_setFlags;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("flags"))), refVal_setFlags );
        setFlags(refVal_setFlags);
    }
    return ok;
}

std::vector<std::shared_ptr<V0_0_39_assoc_short>>& V0_0_39_account::getAssociations()
{
    return m_Associations;
}

void V0_0_39_account::setAssociations(const std::vector<std::shared_ptr<V0_0_39_assoc_short>>& value)
{
    m_Associations = value;
    m_AssociationsIsSet = true;
}

bool V0_0_39_account::associationsIsSet() const
{
    return m_AssociationsIsSet;
}

void V0_0_39_account::unsetAssociations()
{
    m_AssociationsIsSet = false;
}
std::vector<std::shared_ptr<V0_0_39_coord>>& V0_0_39_account::getCoordinators()
{
    return m_Coordinators;
}

void V0_0_39_account::setCoordinators(const std::vector<std::shared_ptr<V0_0_39_coord>>& value)
{
    m_Coordinators = value;
    m_CoordinatorsIsSet = true;
}

bool V0_0_39_account::coordinatorsIsSet() const
{
    return m_CoordinatorsIsSet;
}

void V0_0_39_account::unsetCoordinators()
{
    m_CoordinatorsIsSet = false;
}
utility::string_t V0_0_39_account::getDescription() const
{
    return m_Description;
}

void V0_0_39_account::setDescription(const utility::string_t& value)
{
    m_Description = value;
    m_DescriptionIsSet = true;
}

bool V0_0_39_account::descriptionIsSet() const
{
    return m_DescriptionIsSet;
}

void V0_0_39_account::unsetDescription()
{
    m_DescriptionIsSet = false;
}
utility::string_t V0_0_39_account::getName() const
{
    return m_Name;
}

void V0_0_39_account::setName(const utility::string_t& value)
{
    m_Name = value;
    m_NameIsSet = true;
}

bool V0_0_39_account::nameIsSet() const
{
    return m_NameIsSet;
}

void V0_0_39_account::unsetName()
{
    m_NameIsSet = false;
}
utility::string_t V0_0_39_account::getOrganization() const
{
    return m_Organization;
}

void V0_0_39_account::setOrganization(const utility::string_t& value)
{
    m_Organization = value;
    m_OrganizationIsSet = true;
}

bool V0_0_39_account::organizationIsSet() const
{
    return m_OrganizationIsSet;
}

void V0_0_39_account::unsetOrganization()
{
    m_OrganizationIsSet = false;
}
std::vector<utility::string_t>& V0_0_39_account::getFlags()
{
    return m_Flags;
}

void V0_0_39_account::setFlags(const std::vector<utility::string_t>& value)
{
    m_Flags = value;
    m_FlagsIsSet = true;
}

bool V0_0_39_account::flagsIsSet() const
{
    return m_FlagsIsSet;
}

void V0_0_39_account::unsetFlags()
{
    m_FlagsIsSet = false;
}
}
}
}
}


