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



#include "slurmrestapi/model/V0_0_41_openapi_slurmdbd_config_resp_accounts_inner_associations_inner.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



V0_0_41_openapi_slurmdbd_config_resp_accounts_inner_associations_inner::V0_0_41_openapi_slurmdbd_config_resp_accounts_inner_associations_inner()
{
    m_Account = utility::conversions::to_string_t("");
    m_AccountIsSet = false;
    m_Cluster = utility::conversions::to_string_t("");
    m_ClusterIsSet = false;
    m_Partition = utility::conversions::to_string_t("");
    m_PartitionIsSet = false;
    m_User = utility::conversions::to_string_t("");
    m_UserIsSet = false;
    m_Id = 0;
    m_IdIsSet = false;
}

V0_0_41_openapi_slurmdbd_config_resp_accounts_inner_associations_inner::~V0_0_41_openapi_slurmdbd_config_resp_accounts_inner_associations_inner()
{
}

void V0_0_41_openapi_slurmdbd_config_resp_accounts_inner_associations_inner::validate()
{
    // TODO: implement validation
}

web::json::value V0_0_41_openapi_slurmdbd_config_resp_accounts_inner_associations_inner::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_AccountIsSet)
    {
        val[utility::conversions::to_string_t(U("account"))] = ModelBase::toJson(m_Account);
    }
    if(m_ClusterIsSet)
    {
        val[utility::conversions::to_string_t(U("cluster"))] = ModelBase::toJson(m_Cluster);
    }
    if(m_PartitionIsSet)
    {
        val[utility::conversions::to_string_t(U("partition"))] = ModelBase::toJson(m_Partition);
    }
    if(m_UserIsSet)
    {
        val[utility::conversions::to_string_t(U("user"))] = ModelBase::toJson(m_User);
    }
    if(m_IdIsSet)
    {
        val[utility::conversions::to_string_t(U("id"))] = ModelBase::toJson(m_Id);
    }

    return val;
}

bool V0_0_41_openapi_slurmdbd_config_resp_accounts_inner_associations_inner::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("account"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("account")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setAccount;
            ok &= ModelBase::fromJson(fieldValue, refVal_setAccount);
            setAccount(refVal_setAccount);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("cluster"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("cluster")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setCluster;
            ok &= ModelBase::fromJson(fieldValue, refVal_setCluster);
            setCluster(refVal_setCluster);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("partition"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("partition")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setPartition;
            ok &= ModelBase::fromJson(fieldValue, refVal_setPartition);
            setPartition(refVal_setPartition);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("user"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("user")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setUser;
            ok &= ModelBase::fromJson(fieldValue, refVal_setUser);
            setUser(refVal_setUser);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("id"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("id")));
        if(!fieldValue.is_null())
        {
            int32_t refVal_setId;
            ok &= ModelBase::fromJson(fieldValue, refVal_setId);
            setId(refVal_setId);
        }
    }
    return ok;
}

void V0_0_41_openapi_slurmdbd_config_resp_accounts_inner_associations_inner::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
    if(m_ClusterIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("cluster")), m_Cluster));
    }
    if(m_PartitionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("partition")), m_Partition));
    }
    if(m_UserIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("user")), m_User));
    }
    if(m_IdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("id")), m_Id));
    }
}

bool V0_0_41_openapi_slurmdbd_config_resp_accounts_inner_associations_inner::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("account"))))
    {
        utility::string_t refVal_setAccount;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("account"))), refVal_setAccount );
        setAccount(refVal_setAccount);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("cluster"))))
    {
        utility::string_t refVal_setCluster;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("cluster"))), refVal_setCluster );
        setCluster(refVal_setCluster);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("partition"))))
    {
        utility::string_t refVal_setPartition;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("partition"))), refVal_setPartition );
        setPartition(refVal_setPartition);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("user"))))
    {
        utility::string_t refVal_setUser;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("user"))), refVal_setUser );
        setUser(refVal_setUser);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("id"))))
    {
        int32_t refVal_setId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("id"))), refVal_setId );
        setId(refVal_setId);
    }
    return ok;
}

utility::string_t V0_0_41_openapi_slurmdbd_config_resp_accounts_inner_associations_inner::getAccount() const
{
    return m_Account;
}

void V0_0_41_openapi_slurmdbd_config_resp_accounts_inner_associations_inner::setAccount(const utility::string_t& value)
{
    m_Account = value;
    m_AccountIsSet = true;
}

bool V0_0_41_openapi_slurmdbd_config_resp_accounts_inner_associations_inner::accountIsSet() const
{
    return m_AccountIsSet;
}

void V0_0_41_openapi_slurmdbd_config_resp_accounts_inner_associations_inner::unsetAccount()
{
    m_AccountIsSet = false;
}
utility::string_t V0_0_41_openapi_slurmdbd_config_resp_accounts_inner_associations_inner::getCluster() const
{
    return m_Cluster;
}

void V0_0_41_openapi_slurmdbd_config_resp_accounts_inner_associations_inner::setCluster(const utility::string_t& value)
{
    m_Cluster = value;
    m_ClusterIsSet = true;
}

bool V0_0_41_openapi_slurmdbd_config_resp_accounts_inner_associations_inner::clusterIsSet() const
{
    return m_ClusterIsSet;
}

void V0_0_41_openapi_slurmdbd_config_resp_accounts_inner_associations_inner::unsetCluster()
{
    m_ClusterIsSet = false;
}
utility::string_t V0_0_41_openapi_slurmdbd_config_resp_accounts_inner_associations_inner::getPartition() const
{
    return m_Partition;
}

void V0_0_41_openapi_slurmdbd_config_resp_accounts_inner_associations_inner::setPartition(const utility::string_t& value)
{
    m_Partition = value;
    m_PartitionIsSet = true;
}

bool V0_0_41_openapi_slurmdbd_config_resp_accounts_inner_associations_inner::partitionIsSet() const
{
    return m_PartitionIsSet;
}

void V0_0_41_openapi_slurmdbd_config_resp_accounts_inner_associations_inner::unsetPartition()
{
    m_PartitionIsSet = false;
}
utility::string_t V0_0_41_openapi_slurmdbd_config_resp_accounts_inner_associations_inner::getUser() const
{
    return m_User;
}

void V0_0_41_openapi_slurmdbd_config_resp_accounts_inner_associations_inner::setUser(const utility::string_t& value)
{
    m_User = value;
    m_UserIsSet = true;
}

bool V0_0_41_openapi_slurmdbd_config_resp_accounts_inner_associations_inner::userIsSet() const
{
    return m_UserIsSet;
}

void V0_0_41_openapi_slurmdbd_config_resp_accounts_inner_associations_inner::unsetUser()
{
    m_UserIsSet = false;
}
int32_t V0_0_41_openapi_slurmdbd_config_resp_accounts_inner_associations_inner::getId() const
{
    return m_Id;
}

void V0_0_41_openapi_slurmdbd_config_resp_accounts_inner_associations_inner::setId(int32_t value)
{
    m_Id = value;
    m_IdIsSet = true;
}

bool V0_0_41_openapi_slurmdbd_config_resp_accounts_inner_associations_inner::idIsSet() const
{
    return m_IdIsSet;
}

void V0_0_41_openapi_slurmdbd_config_resp_accounts_inner_associations_inner::unsetId()
{
    m_IdIsSet = false;
}
}
}
}
}


