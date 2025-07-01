/**
 * Discord HTTP API (Preview) - REST API Client
 * Preview of the Discord v10 HTTP API specification. See https://discord.com/developers/docs for more details.
 * 
 * ## Metadata
 *   
 * - **Copyright**: Copyright (c) 2025 Qntx
 * - **Author**: ΣX <gitctrlx@gmail.com>
 * - **Version**: 10
 * - **Modified**: 2025-07-01T06:33:49.033017897Z[Etc/UTC]
 * - **Generator Version**: 7.14.0
 *
 * <details>
 * <summary><strong>⚠️ Important Disclaimer & Limitation of Liability</strong></summary>
 * <br>
 * > **IMPORTANT**: This software is provided "as is" without any warranties, express or implied, including but not limited
 * > to warranties of merchantability, fitness for a particular purpose, or non-infringement. The developers, contributors,
 * > and licensors (collectively, "Developers") make no representations regarding the accuracy, completeness, or reliability
 * > of this software or its outputs.
 * >
 * > This client is not intended to provide financial, investment, tax, or legal advice. It facilitates interaction with the
 * > Discord HTTP API (Preview) service but does not endorse or recommend any financial actions, including the purchase, sale, or holding of
 * > financial instruments (e.g., stocks, bonds, derivatives, cryptocurrencies). Users must consult qualified financial or
 * > legal professionals before making decisions based on this software's outputs.
 * >
 * > Financial markets are inherently speculative and carry significant risks. Using this software in trading, analysis, or
 * > other financial activities may result in substantial losses, including total loss of capital. The Developers are not
 * > liable for any losses or damages arising from such use. Users assume full responsibility for validating the software's
 * > outputs and ensuring their suitability for intended purposes.
 * >
 * > This client may rely on third-party data or services (e.g., market feeds, APIs). The Developers do not control or verify
 * > the accuracy of these services and are not liable for any errors, delays, or losses resulting from their use. Users must
 * > comply with third-party terms and conditions.
 * >
 * > Users are solely responsible for ensuring compliance with all applicable financial, tax, and regulatory requirements in
 * > their jurisdiction. This includes obtaining necessary licenses or approvals for trading or investment activities. The
 * > Developers disclaim liability for any legal consequences arising from non-compliance.
 * >
 * > To the fullest extent permitted by law, the Developers shall not be liable for any direct, indirect, incidental,
 * > consequential, or punitive damages arising from the use or inability to use this software, including but not limited to
 * > loss of profits, data, or business opportunities.
 *
 * </details>
 */

/*
 * OAIBasicMessageResponse_interaction_metadata.h
 *
 * 
 */

#ifndef OAIBasicMessageResponse_interaction_metadata_H
#define OAIBasicMessageResponse_interaction_metadata_H

#include <QJsonObject>

#include "OAIApplicationCommandInteractionMetadataResponse.h"
#include "OAIMessageComponentInteractionMetadataResponse.h"
#include "OAIModalSubmitInteractionMetadataResponse.h"
#include "OAIModalSubmitInteractionMetadataResponse_triggering_interaction_metadata.h"
#include "OAIUserResponse.h"
#include <QMap>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace dc_rest {
class OAIModalSubmitInteractionMetadataResponse_triggering_interaction_metadata;
class OAIUserResponse;

class OAIBasicMessageResponse_interaction_metadata : public OAIObject {
public:
    OAIBasicMessageResponse_interaction_metadata();
    OAIBasicMessageResponse_interaction_metadata(QString json);
    ~OAIBasicMessageResponse_interaction_metadata() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getId() const;
    void setId(const QString &id);
    bool is_id_Set() const;
    bool is_id_Valid() const;

    qint32 getType() const;
    void setType(const qint32 &type);
    bool is_type_Set() const;
    bool is_type_Valid() const;

    QMap<QString, QString> getAuthorizingIntegrationOwners() const;
    void setAuthorizingIntegrationOwners(const QMap<QString, QString> &authorizing_integration_owners);
    bool is_authorizing_integration_owners_Set() const;
    bool is_authorizing_integration_owners_Valid() const;

    QString getInteractedMessageId() const;
    void setInteractedMessageId(const QString &interacted_message_id);
    bool is_interacted_message_id_Set() const;
    bool is_interacted_message_id_Valid() const;

    OAIModalSubmitInteractionMetadataResponse_triggering_interaction_metadata getTriggeringInteractionMetadata() const;
    void setTriggeringInteractionMetadata(const OAIModalSubmitInteractionMetadataResponse_triggering_interaction_metadata &triggering_interaction_metadata);
    bool is_triggering_interaction_metadata_Set() const;
    bool is_triggering_interaction_metadata_Valid() const;

    OAIUserResponse getUser() const;
    void setUser(const OAIUserResponse &user);
    bool is_user_Set() const;
    bool is_user_Valid() const;

    QString getOriginalResponseMessageId() const;
    void setOriginalResponseMessageId(const QString &original_response_message_id);
    bool is_original_response_message_id_Set() const;
    bool is_original_response_message_id_Valid() const;

    OAIUserResponse getTargetUser() const;
    void setTargetUser(const OAIUserResponse &target_user);
    bool is_target_user_Set() const;
    bool is_target_user_Valid() const;

    QString getTargetMessageId() const;
    void setTargetMessageId(const QString &target_message_id);
    bool is_target_message_id_Set() const;
    bool is_target_message_id_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString m_id;
    bool m_id_isSet;
    bool m_id_isValid;

    qint32 m_type;
    bool m_type_isSet;
    bool m_type_isValid;

    QMap<QString, QString> m_authorizing_integration_owners;
    bool m_authorizing_integration_owners_isSet;
    bool m_authorizing_integration_owners_isValid;

    QString m_interacted_message_id;
    bool m_interacted_message_id_isSet;
    bool m_interacted_message_id_isValid;

    OAIModalSubmitInteractionMetadataResponse_triggering_interaction_metadata m_triggering_interaction_metadata;
    bool m_triggering_interaction_metadata_isSet;
    bool m_triggering_interaction_metadata_isValid;

    OAIUserResponse m_user;
    bool m_user_isSet;
    bool m_user_isValid;

    QString m_original_response_message_id;
    bool m_original_response_message_id_isSet;
    bool m_original_response_message_id_isValid;

    OAIUserResponse m_target_user;
    bool m_target_user_isSet;
    bool m_target_user_isValid;

    QString m_target_message_id;
    bool m_target_message_id_isSet;
    bool m_target_message_id_isValid;
};

} // namespace dc_rest

Q_DECLARE_METATYPE(dc_rest::OAIBasicMessageResponse_interaction_metadata)

#endif // OAIBasicMessageResponse_interaction_metadata_H
