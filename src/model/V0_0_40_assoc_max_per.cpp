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



#include "slurmrestapi/model/V0_0_40_assoc_max_per.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



V0_0_40_assoc_max_per::V0_0_40_assoc_max_per()
{
    m_AccountIsSet = false;
}

V0_0_40_assoc_max_per::~V0_0_40_assoc_max_per()
{
}

void V0_0_40_assoc_max_per::validate()
{
    // TODO: implement validation
}

web::json::value V0_0_40_assoc_max_per::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_AccountIsSet)
    {
        val[utility::conversions::to_string_t(U("account"))] = ModelBase::toJson(m_Account);
    }

    return val;
}

bool V0_0_40_assoc_max_per::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("account"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("account")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<V0_0_40_assoc_max_per_account> refVal_setAccount;
            ok &= ModelBase::fromJson(fieldValue, refVal_setAccount);
            setAccount(refVal_setAccount);
        }
    }
    return ok;
}

void V0_0_40_assoc_max_per::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_AccountIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("account")), m_Account));
    }
}

bool V0_0_40_assoc_max_per::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("account"))))
    {
        std::shared_ptr<V0_0_40_assoc_max_per_account> refVal_setAccount;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("account"))), refVal_setAccount );
        setAccount(refVal_setAccount);
    }
    return ok;
}

std::shared_ptr<V0_0_40_assoc_max_per_account> V0_0_40_assoc_max_per::getAccount() const
{
    return m_Account;
}

void V0_0_40_assoc_max_per::setAccount(const std::shared_ptr<V0_0_40_assoc_max_per_account>& value)
{
    m_Account = value;
    m_AccountIsSet = true;
}

bool V0_0_40_assoc_max_per::accountIsSet() const
{
    return m_AccountIsSet;
}

void V0_0_40_assoc_max_per::unsetAccount()
{
    m_AccountIsSet = false;
}
}
}
}
}


