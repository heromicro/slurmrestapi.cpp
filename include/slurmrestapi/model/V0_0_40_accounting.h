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
 * V0_0_40_accounting.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_V0_0_40_accounting_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_V0_0_40_accounting_H_


#include "slurmrestapi/ModelBase.h"

#include "slurmrestapi/model/V0_0_40_accounting_allocated.h"
#include "slurmrestapi/model/V0_0_40_tres.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

class V0_0_40_accounting_allocated;
class V0_0_40_tres;


/// <summary>
/// 
/// </summary>
class  V0_0_40_accounting
    : public ModelBase
{
public:
    V0_0_40_accounting();
    virtual ~V0_0_40_accounting();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// V0_0_40_accounting members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<V0_0_40_accounting_allocated> getAllocated() const;
    bool allocatedIsSet() const;
    void unsetAllocated();

    void setAllocated(const std::shared_ptr<V0_0_40_accounting_allocated>& value);

    /// <summary>
    /// Association ID or Workload characterization key ID
    /// </summary>
    int32_t getId() const;
    bool idIsSet() const;
    void unsetId();

    void setId(int32_t value);

    /// <summary>
    /// When the record was started
    /// </summary>
    int64_t getStart() const;
    bool startIsSet() const;
    void unsetStart();

    void setStart(int64_t value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<V0_0_40_tres> getTRES() const;
    bool tRESIsSet() const;
    void unsetTRES();

    void setTRES(const std::shared_ptr<V0_0_40_tres>& value);


protected:
    std::shared_ptr<V0_0_40_accounting_allocated> m_Allocated;
    bool m_AllocatedIsSet;
    int32_t m_Id;
    bool m_IdIsSet;
    int64_t m_Start;
    bool m_StartIsSet;
    std::shared_ptr<V0_0_40_tres> m_TRES;
    bool m_TRESIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_V0_0_40_accounting_H_ */
