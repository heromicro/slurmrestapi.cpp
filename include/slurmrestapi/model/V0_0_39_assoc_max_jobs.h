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
 * V0_0_39_assoc_max_jobs.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_V0_0_39_assoc_max_jobs_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_V0_0_39_assoc_max_jobs_H_


#include "slurmrestapi/ModelBase.h"

#include "slurmrestapi/model/V0_0_39_assoc_max_jobs_per.h"
#include "slurmrestapi/model/V0_0_39_uint32_no_val.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

class V0_0_39_assoc_max_jobs_per;
class V0_0_39_uint32_no_val;


/// <summary>
/// 
/// </summary>
class  V0_0_39_assoc_max_jobs
    : public ModelBase
{
public:
    V0_0_39_assoc_max_jobs();
    virtual ~V0_0_39_assoc_max_jobs();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// V0_0_39_assoc_max_jobs members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<V0_0_39_assoc_max_jobs_per> getPer() const;
    bool perIsSet() const;
    void unsetPer();

    void setPer(const std::shared_ptr<V0_0_39_assoc_max_jobs_per>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<V0_0_39_uint32_no_val> getActive() const;
    bool activeIsSet() const;
    void unsetActive();

    void setActive(const std::shared_ptr<V0_0_39_uint32_no_val>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<V0_0_39_uint32_no_val> getAccruing() const;
    bool accruingIsSet() const;
    void unsetAccruing();

    void setAccruing(const std::shared_ptr<V0_0_39_uint32_no_val>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<V0_0_39_uint32_no_val> getTotal() const;
    bool totalIsSet() const;
    void unsetTotal();

    void setTotal(const std::shared_ptr<V0_0_39_uint32_no_val>& value);


protected:
    std::shared_ptr<V0_0_39_assoc_max_jobs_per> m_Per;
    bool m_PerIsSet;
    std::shared_ptr<V0_0_39_uint32_no_val> m_Active;
    bool m_ActiveIsSet;
    std::shared_ptr<V0_0_39_uint32_no_val> m_Accruing;
    bool m_AccruingIsSet;
    std::shared_ptr<V0_0_39_uint32_no_val> m_Total;
    bool m_TotalIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_V0_0_39_assoc_max_jobs_H_ */
