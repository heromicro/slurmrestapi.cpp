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
 * V0_0_41_openapi_slurmdbd_config_resp.h
 *
 * 
 */

#ifndef HM_SLURM_CLIENT_MODEL_V0_0_41_openapi_slurmdbd_config_resp_H_
#define HM_SLURM_CLIENT_MODEL_V0_0_41_openapi_slurmdbd_config_resp_H_


#include "slurmrestapi/ModelBase.h"

#include "slurmrestapi/model/V0_0_41_openapi_slurmdbd_config_resp_users_inner.h"
#include "slurmrestapi/model/V0_0_41_openapi_shares_resp_errors_inner.h"
#include "slurmrestapi/model/V0_0_41_openapi_slurmdbd_config_resp_accounts_inner.h"
#include "slurmrestapi/model/V0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_steps_inner_tres_requested_max_inner.h"
#include "slurmrestapi/model/V0_0_41_openapi_slurmdbd_config_resp_instances_inner.h"
#include "slurmrestapi/model/V0_0_41_openapi_slurmdbd_config_resp_users_inner_wckeys_inner.h"
#include "slurmrestapi/model/V0_0_41_openapi_slurmdbd_config_resp_clusters_inner.h"
#include "slurmrestapi/model/V0_0_41_openapi_slurmdbd_config_resp_associations_inner.h"
#include "slurmrestapi/model/V0_0_41_openapi_shares_resp_meta.h"
#include "slurmrestapi/model/V0_0_41_openapi_shares_resp_warnings_inner.h"
#include <vector>
#include "slurmrestapi/model/V0_0_41_openapi_slurmdbd_config_resp_qos_inner.h"

namespace hm {
namespace slurm {
namespace client {
namespace model {

class V0_0_41_openapi_slurmdbd_config_resp_clusters_inner;
class V0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_steps_inner_tres_requested_max_inner;
class V0_0_41_openapi_slurmdbd_config_resp_accounts_inner;
class V0_0_41_openapi_slurmdbd_config_resp_users_inner;
class V0_0_41_openapi_slurmdbd_config_resp_qos_inner;
class V0_0_41_openapi_slurmdbd_config_resp_users_inner_wckeys_inner;
class V0_0_41_openapi_slurmdbd_config_resp_associations_inner;
class V0_0_41_openapi_slurmdbd_config_resp_instances_inner;
class V0_0_41_openapi_shares_resp_meta;
class V0_0_41_openapi_shares_resp_errors_inner;
class V0_0_41_openapi_shares_resp_warnings_inner;


/// <summary>
/// 
/// </summary>
class  V0_0_41_openapi_slurmdbd_config_resp
    : public ModelBase
{
public:
    V0_0_41_openapi_slurmdbd_config_resp();
    virtual ~V0_0_41_openapi_slurmdbd_config_resp();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// V0_0_41_openapi_slurmdbd_config_resp members

    /// <summary>
    /// Clusters
    /// </summary>
    std::vector<std::shared_ptr<V0_0_41_openapi_slurmdbd_config_resp_clusters_inner>>& getClusters();
    bool clustersIsSet() const;
    void unsetClusters();

    void setClusters(const std::vector<std::shared_ptr<V0_0_41_openapi_slurmdbd_config_resp_clusters_inner>>& value);

    /// <summary>
    /// TRES
    /// </summary>
    std::vector<std::shared_ptr<V0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_steps_inner_tres_requested_max_inner>>& getTres();
    bool tresIsSet() const;
    void unsetTres();

    void setTres(const std::vector<std::shared_ptr<V0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_steps_inner_tres_requested_max_inner>>& value);

    /// <summary>
    /// Accounts
    /// </summary>
    std::vector<std::shared_ptr<V0_0_41_openapi_slurmdbd_config_resp_accounts_inner>>& getAccounts();
    bool accountsIsSet() const;
    void unsetAccounts();

    void setAccounts(const std::vector<std::shared_ptr<V0_0_41_openapi_slurmdbd_config_resp_accounts_inner>>& value);

    /// <summary>
    /// Users
    /// </summary>
    std::vector<std::shared_ptr<V0_0_41_openapi_slurmdbd_config_resp_users_inner>>& getUsers();
    bool usersIsSet() const;
    void unsetUsers();

    void setUsers(const std::vector<std::shared_ptr<V0_0_41_openapi_slurmdbd_config_resp_users_inner>>& value);

    /// <summary>
    /// QOS
    /// </summary>
    std::vector<std::shared_ptr<V0_0_41_openapi_slurmdbd_config_resp_qos_inner>>& getQos();
    bool qosIsSet() const;
    void unsetQos();

    void setQos(const std::vector<std::shared_ptr<V0_0_41_openapi_slurmdbd_config_resp_qos_inner>>& value);

    /// <summary>
    /// WCKeys
    /// </summary>
    std::vector<std::shared_ptr<V0_0_41_openapi_slurmdbd_config_resp_users_inner_wckeys_inner>>& getWckeys();
    bool wckeysIsSet() const;
    void unsetWckeys();

    void setWckeys(const std::vector<std::shared_ptr<V0_0_41_openapi_slurmdbd_config_resp_users_inner_wckeys_inner>>& value);

    /// <summary>
    /// Associations
    /// </summary>
    std::vector<std::shared_ptr<V0_0_41_openapi_slurmdbd_config_resp_associations_inner>>& getAssociations();
    bool associationsIsSet() const;
    void unsetAssociations();

    void setAssociations(const std::vector<std::shared_ptr<V0_0_41_openapi_slurmdbd_config_resp_associations_inner>>& value);

    /// <summary>
    /// Instances
    /// </summary>
    std::vector<std::shared_ptr<V0_0_41_openapi_slurmdbd_config_resp_instances_inner>>& getInstances();
    bool instancesIsSet() const;
    void unsetInstances();

    void setInstances(const std::vector<std::shared_ptr<V0_0_41_openapi_slurmdbd_config_resp_instances_inner>>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<V0_0_41_openapi_shares_resp_meta> getMeta() const;
    bool metaIsSet() const;
    void unsetMeta();

    void setMeta(const std::shared_ptr<V0_0_41_openapi_shares_resp_meta>& value);

    /// <summary>
    /// Query errors
    /// </summary>
    std::vector<std::shared_ptr<V0_0_41_openapi_shares_resp_errors_inner>>& getErrors();
    bool errorsIsSet() const;
    void unsetErrors();

    void setErrors(const std::vector<std::shared_ptr<V0_0_41_openapi_shares_resp_errors_inner>>& value);

    /// <summary>
    /// Query warnings
    /// </summary>
    std::vector<std::shared_ptr<V0_0_41_openapi_shares_resp_warnings_inner>>& getWarnings();
    bool warningsIsSet() const;
    void unsetWarnings();

    void setWarnings(const std::vector<std::shared_ptr<V0_0_41_openapi_shares_resp_warnings_inner>>& value);


protected:
    std::vector<std::shared_ptr<V0_0_41_openapi_slurmdbd_config_resp_clusters_inner>> m_Clusters;
    bool m_ClustersIsSet;
    std::vector<std::shared_ptr<V0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_steps_inner_tres_requested_max_inner>> m_Tres;
    bool m_TresIsSet;
    std::vector<std::shared_ptr<V0_0_41_openapi_slurmdbd_config_resp_accounts_inner>> m_Accounts;
    bool m_AccountsIsSet;
    std::vector<std::shared_ptr<V0_0_41_openapi_slurmdbd_config_resp_users_inner>> m_Users;
    bool m_UsersIsSet;
    std::vector<std::shared_ptr<V0_0_41_openapi_slurmdbd_config_resp_qos_inner>> m_Qos;
    bool m_QosIsSet;
    std::vector<std::shared_ptr<V0_0_41_openapi_slurmdbd_config_resp_users_inner_wckeys_inner>> m_Wckeys;
    bool m_WckeysIsSet;
    std::vector<std::shared_ptr<V0_0_41_openapi_slurmdbd_config_resp_associations_inner>> m_Associations;
    bool m_AssociationsIsSet;
    std::vector<std::shared_ptr<V0_0_41_openapi_slurmdbd_config_resp_instances_inner>> m_Instances;
    bool m_InstancesIsSet;
    std::shared_ptr<V0_0_41_openapi_shares_resp_meta> m_Meta;
    bool m_MetaIsSet;
    std::vector<std::shared_ptr<V0_0_41_openapi_shares_resp_errors_inner>> m_Errors;
    bool m_ErrorsIsSet;
    std::vector<std::shared_ptr<V0_0_41_openapi_shares_resp_warnings_inner>> m_Warnings;
    bool m_WarningsIsSet;
};


}
}
}
}

#endif /* HM_SLURM_CLIENT_MODEL_V0_0_41_openapi_slurmdbd_config_resp_H_ */
