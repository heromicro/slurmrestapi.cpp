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

/*
 * V0_0_41_openapi_users_add_cond_resp_association_condition.h
 *
 * Filters to select associations for users
 */

#ifndef HM_SLURM_CLIENT_MODEL_V0_0_41_openapi_users_add_cond_resp_association_condition_H_
#define HM_SLURM_CLIENT_MODEL_V0_0_41_openapi_users_add_cond_resp_association_condition_H_


#include "slurmrestapi/ModelBase.h"

#include "slurmrestapi/model/V0_0_41_openapi_users_add_cond_resp_association_condition_association.h"
#include <cpprest/details/basic_types.h>
#include <vector>

namespace hm {
namespace slurm {
namespace client {
namespace model {

class V0_0_41_openapi_users_add_cond_resp_association_condition_association;


/// <summary>
/// Filters to select associations for users
/// </summary>
class  V0_0_41_openapi_users_add_cond_resp_association_condition
    : public ModelBase
{
public:
    V0_0_41_openapi_users_add_cond_resp_association_condition();
    virtual ~V0_0_41_openapi_users_add_cond_resp_association_condition();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// V0_0_41_openapi_users_add_cond_resp_association_condition members

    /// <summary>
    /// CSV accounts list
    /// </summary>
    std::vector<utility::string_t>& getAccounts();
    bool accountsIsSet() const;
    void unsetAccounts();

    void setAccounts(const std::vector<utility::string_t>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<V0_0_41_openapi_users_add_cond_resp_association_condition_association> getAssociation() const;
    bool associationIsSet() const;
    void unsetAssociation();

    void setAssociation(const std::shared_ptr<V0_0_41_openapi_users_add_cond_resp_association_condition_association>& value);

    /// <summary>
    /// CSV clusters list
    /// </summary>
    std::vector<utility::string_t>& getClusters();
    bool clustersIsSet() const;
    void unsetClusters();

    void setClusters(const std::vector<utility::string_t>& value);

    /// <summary>
    /// CSV partitions list
    /// </summary>
    std::vector<utility::string_t>& getPartitions();
    bool partitionsIsSet() const;
    void unsetPartitions();

    void setPartitions(const std::vector<utility::string_t>& value);

    /// <summary>
    /// CSV users list
    /// </summary>
    std::vector<utility::string_t>& getUsers();
    bool usersIsSet() const;
    void unsetUsers();

    void setUsers(const std::vector<utility::string_t>& value);

    /// <summary>
    /// CSV WCKeys list
    /// </summary>
    std::vector<utility::string_t>& getWckeys();
    bool wckeysIsSet() const;
    void unsetWckeys();

    void setWckeys(const std::vector<utility::string_t>& value);


protected:
    std::vector<utility::string_t> m_Accounts;
    bool m_AccountsIsSet;
    std::shared_ptr<V0_0_41_openapi_users_add_cond_resp_association_condition_association> m_Association;
    bool m_AssociationIsSet;
    std::vector<utility::string_t> m_Clusters;
    bool m_ClustersIsSet;
    std::vector<utility::string_t> m_Partitions;
    bool m_PartitionsIsSet;
    std::vector<utility::string_t> m_Users;
    bool m_UsersIsSet;
    std::vector<utility::string_t> m_Wckeys;
    bool m_WckeysIsSet;
};


}
}
}
}

#endif /* HM_SLURM_CLIENT_MODEL_V0_0_41_openapi_users_add_cond_resp_association_condition_H_ */