/**
 * Slurm REST API
 * API to access and control Slurm
 *
 * The version of the OpenAPI document: Slurm-24.05.5&openapi/dbv0.0.39&openapi/slurmctld&openapi/slurmdbd&openapi/v0.0.39
 * Contact: sales@schedmd.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 7.10.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "slurmrestapi/model/V0_0_41_openapi_accounts_add_cond_resp_account.h"

namespace hm {
namespace slurm {
namespace client {
namespace model {



V0_0_41_openapi_accounts_add_cond_resp_account::V0_0_41_openapi_accounts_add_cond_resp_account()
{
    m_Description = utility::conversions::to_string_t("");
    m_DescriptionIsSet = false;
    m_Organization = utility::conversions::to_string_t("");
    m_OrganizationIsSet = false;
}

V0_0_41_openapi_accounts_add_cond_resp_account::~V0_0_41_openapi_accounts_add_cond_resp_account()
{
}

void V0_0_41_openapi_accounts_add_cond_resp_account::validate()
{
    // TODO: implement validation
}

web::json::value V0_0_41_openapi_accounts_add_cond_resp_account::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_DescriptionIsSet)
    {
        val[utility::conversions::to_string_t(U("description"))] = ModelBase::toJson(m_Description);
    }
    if(m_OrganizationIsSet)
    {
        val[utility::conversions::to_string_t(U("organization"))] = ModelBase::toJson(m_Organization);
    }

    return val;
}

bool V0_0_41_openapi_accounts_add_cond_resp_account::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    return ok;
}

void V0_0_41_openapi_accounts_add_cond_resp_account::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_DescriptionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("description")), m_Description));
    }
    if(m_OrganizationIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("organization")), m_Organization));
    }
}

bool V0_0_41_openapi_accounts_add_cond_resp_account::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("description"))))
    {
        utility::string_t refVal_setDescription;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("description"))), refVal_setDescription );
        setDescription(refVal_setDescription);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("organization"))))
    {
        utility::string_t refVal_setOrganization;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("organization"))), refVal_setOrganization );
        setOrganization(refVal_setOrganization);
    }
    return ok;
}

utility::string_t V0_0_41_openapi_accounts_add_cond_resp_account::getDescription() const
{
    return m_Description;
}

void V0_0_41_openapi_accounts_add_cond_resp_account::setDescription(const utility::string_t& value)
{
    m_Description = value;
    m_DescriptionIsSet = true;
}

bool V0_0_41_openapi_accounts_add_cond_resp_account::descriptionIsSet() const
{
    return m_DescriptionIsSet;
}

void V0_0_41_openapi_accounts_add_cond_resp_account::unsetDescription()
{
    m_DescriptionIsSet = false;
}
utility::string_t V0_0_41_openapi_accounts_add_cond_resp_account::getOrganization() const
{
    return m_Organization;
}

void V0_0_41_openapi_accounts_add_cond_resp_account::setOrganization(const utility::string_t& value)
{
    m_Organization = value;
    m_OrganizationIsSet = true;
}

bool V0_0_41_openapi_accounts_add_cond_resp_account::organizationIsSet() const
{
    return m_OrganizationIsSet;
}

void V0_0_41_openapi_accounts_add_cond_resp_account::unsetOrganization()
{
    m_OrganizationIsSet = false;
}
}
}
}
}


