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



#include "slurmrestapi/model/V0_0_41_openapi_accounts_add_cond_resp_association_condition.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



V0_0_41_openapi_accounts_add_cond_resp_association_condition::V0_0_41_openapi_accounts_add_cond_resp_association_condition()
{
    m_AccountsIsSet = false;
    m_AssociationIsSet = false;
    m_ClustersIsSet = false;
}

V0_0_41_openapi_accounts_add_cond_resp_association_condition::~V0_0_41_openapi_accounts_add_cond_resp_association_condition()
{
}

void V0_0_41_openapi_accounts_add_cond_resp_association_condition::validate()
{
    // TODO: implement validation
}

web::json::value V0_0_41_openapi_accounts_add_cond_resp_association_condition::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_AccountsIsSet)
    {
        val[utility::conversions::to_string_t(U("accounts"))] = ModelBase::toJson(m_Accounts);
    }
    if(m_AssociationIsSet)
    {
        val[utility::conversions::to_string_t(U("association"))] = ModelBase::toJson(m_Association);
    }
    if(m_ClustersIsSet)
    {
        val[utility::conversions::to_string_t(U("clusters"))] = ModelBase::toJson(m_Clusters);
    }

    return val;
}

bool V0_0_41_openapi_accounts_add_cond_resp_association_condition::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("accounts"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("accounts")));
        if(!fieldValue.is_null())
        {
            std::vector<utility::string_t> refVal_setAccounts;
            ok &= ModelBase::fromJson(fieldValue, refVal_setAccounts);
            setAccounts(refVal_setAccounts);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("association"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("association")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<V0_0_41_openapi_users_add_cond_resp_association_condition_association> refVal_setAssociation;
            ok &= ModelBase::fromJson(fieldValue, refVal_setAssociation);
            setAssociation(refVal_setAssociation);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("clusters"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("clusters")));
        if(!fieldValue.is_null())
        {
            std::vector<utility::string_t> refVal_setClusters;
            ok &= ModelBase::fromJson(fieldValue, refVal_setClusters);
            setClusters(refVal_setClusters);
        }
    }
    return ok;
}

void V0_0_41_openapi_accounts_add_cond_resp_association_condition::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_AccountsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("accounts")), m_Accounts));
    }
    if(m_AssociationIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("association")), m_Association));
    }
    if(m_ClustersIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("clusters")), m_Clusters));
    }
}

bool V0_0_41_openapi_accounts_add_cond_resp_association_condition::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("accounts"))))
    {
        std::vector<utility::string_t> refVal_setAccounts;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("accounts"))), refVal_setAccounts );
        setAccounts(refVal_setAccounts);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("association"))))
    {
        std::shared_ptr<V0_0_41_openapi_users_add_cond_resp_association_condition_association> refVal_setAssociation;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("association"))), refVal_setAssociation );
        setAssociation(refVal_setAssociation);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("clusters"))))
    {
        std::vector<utility::string_t> refVal_setClusters;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("clusters"))), refVal_setClusters );
        setClusters(refVal_setClusters);
    }
    return ok;
}

std::vector<utility::string_t>& V0_0_41_openapi_accounts_add_cond_resp_association_condition::getAccounts()
{
    return m_Accounts;
}

void V0_0_41_openapi_accounts_add_cond_resp_association_condition::setAccounts(const std::vector<utility::string_t>& value)
{
    m_Accounts = value;
    m_AccountsIsSet = true;
}

bool V0_0_41_openapi_accounts_add_cond_resp_association_condition::accountsIsSet() const
{
    return m_AccountsIsSet;
}

void V0_0_41_openapi_accounts_add_cond_resp_association_condition::unsetAccounts()
{
    m_AccountsIsSet = false;
}
std::shared_ptr<V0_0_41_openapi_users_add_cond_resp_association_condition_association> V0_0_41_openapi_accounts_add_cond_resp_association_condition::getAssociation() const
{
    return m_Association;
}

void V0_0_41_openapi_accounts_add_cond_resp_association_condition::setAssociation(const std::shared_ptr<V0_0_41_openapi_users_add_cond_resp_association_condition_association>& value)
{
    m_Association = value;
    m_AssociationIsSet = true;
}

bool V0_0_41_openapi_accounts_add_cond_resp_association_condition::associationIsSet() const
{
    return m_AssociationIsSet;
}

void V0_0_41_openapi_accounts_add_cond_resp_association_condition::unsetAssociation()
{
    m_AssociationIsSet = false;
}
std::vector<utility::string_t>& V0_0_41_openapi_accounts_add_cond_resp_association_condition::getClusters()
{
    return m_Clusters;
}

void V0_0_41_openapi_accounts_add_cond_resp_association_condition::setClusters(const std::vector<utility::string_t>& value)
{
    m_Clusters = value;
    m_ClustersIsSet = true;
}

bool V0_0_41_openapi_accounts_add_cond_resp_association_condition::clustersIsSet() const
{
    return m_ClustersIsSet;
}

void V0_0_41_openapi_accounts_add_cond_resp_association_condition::unsetClusters()
{
    m_ClustersIsSet = false;
}
}
}
}
}


