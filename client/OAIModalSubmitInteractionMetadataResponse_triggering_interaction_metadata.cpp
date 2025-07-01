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

#include "OAIModalSubmitInteractionMetadataResponse_triggering_interaction_metadata.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace dc_rest {

OAIModalSubmitInteractionMetadataResponse_triggering_interaction_metadata::OAIModalSubmitInteractionMetadataResponse_triggering_interaction_metadata(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIModalSubmitInteractionMetadataResponse_triggering_interaction_metadata::OAIModalSubmitInteractionMetadataResponse_triggering_interaction_metadata() {
    this->initializeModel();
}

OAIModalSubmitInteractionMetadataResponse_triggering_interaction_metadata::~OAIModalSubmitInteractionMetadataResponse_triggering_interaction_metadata() {}

void OAIModalSubmitInteractionMetadataResponse_triggering_interaction_metadata::initializeModel() {

    m_id_isSet = false;
    m_id_isValid = false;

    m_type_isSet = false;
    m_type_isValid = false;

    m_authorizing_integration_owners_isSet = false;
    m_authorizing_integration_owners_isValid = false;

    m_interacted_message_id_isSet = false;
    m_interacted_message_id_isValid = false;

    m_user_isSet = false;
    m_user_isValid = false;

    m_original_response_message_id_isSet = false;
    m_original_response_message_id_isValid = false;

    m_target_user_isSet = false;
    m_target_user_isValid = false;

    m_target_message_id_isSet = false;
    m_target_message_id_isValid = false;
}

void OAIModalSubmitInteractionMetadataResponse_triggering_interaction_metadata::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIModalSubmitInteractionMetadataResponse_triggering_interaction_metadata::fromJsonObject(QJsonObject json) {

    m_id_isValid = ::dc_rest::fromJsonValue(m_id, json[QString("id")]);
    m_id_isSet = !json[QString("id")].isNull() && m_id_isValid;

    m_type_isValid = ::dc_rest::fromJsonValue(m_type, json[QString("type")]);
    m_type_isSet = !json[QString("type")].isNull() && m_type_isValid;

    m_authorizing_integration_owners_isValid = ::dc_rest::fromJsonValue(m_authorizing_integration_owners, json[QString("authorizing_integration_owners")]);
    m_authorizing_integration_owners_isSet = !json[QString("authorizing_integration_owners")].isNull() && m_authorizing_integration_owners_isValid;

    m_interacted_message_id_isValid = ::dc_rest::fromJsonValue(m_interacted_message_id, json[QString("interacted_message_id")]);
    m_interacted_message_id_isSet = !json[QString("interacted_message_id")].isNull() && m_interacted_message_id_isValid;

    m_user_isValid = ::dc_rest::fromJsonValue(m_user, json[QString("user")]);
    m_user_isSet = !json[QString("user")].isNull() && m_user_isValid;

    m_original_response_message_id_isValid = ::dc_rest::fromJsonValue(m_original_response_message_id, json[QString("original_response_message_id")]);
    m_original_response_message_id_isSet = !json[QString("original_response_message_id")].isNull() && m_original_response_message_id_isValid;

    m_target_user_isValid = ::dc_rest::fromJsonValue(m_target_user, json[QString("target_user")]);
    m_target_user_isSet = !json[QString("target_user")].isNull() && m_target_user_isValid;

    m_target_message_id_isValid = ::dc_rest::fromJsonValue(m_target_message_id, json[QString("target_message_id")]);
    m_target_message_id_isSet = !json[QString("target_message_id")].isNull() && m_target_message_id_isValid;
}

QString OAIModalSubmitInteractionMetadataResponse_triggering_interaction_metadata::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIModalSubmitInteractionMetadataResponse_triggering_interaction_metadata::asJsonObject() const {
    QJsonObject obj;
    if (m_id_isSet) {
        obj.insert(QString("id"), ::dc_rest::toJsonValue(m_id));
    }
    if (m_type_isSet) {
        obj.insert(QString("type"), ::dc_rest::toJsonValue(m_type));
    }
    if (m_authorizing_integration_owners.size() > 0) {
        obj.insert(QString("authorizing_integration_owners"), ::dc_rest::toJsonValue(m_authorizing_integration_owners));
    }
    if (m_interacted_message_id_isSet) {
        obj.insert(QString("interacted_message_id"), ::dc_rest::toJsonValue(m_interacted_message_id));
    }
    if (m_user.isSet()) {
        obj.insert(QString("user"), ::dc_rest::toJsonValue(m_user));
    }
    if (m_original_response_message_id_isSet) {
        obj.insert(QString("original_response_message_id"), ::dc_rest::toJsonValue(m_original_response_message_id));
    }
    if (m_target_user.isSet()) {
        obj.insert(QString("target_user"), ::dc_rest::toJsonValue(m_target_user));
    }
    if (m_target_message_id_isSet) {
        obj.insert(QString("target_message_id"), ::dc_rest::toJsonValue(m_target_message_id));
    }
    return obj;
}

QString OAIModalSubmitInteractionMetadataResponse_triggering_interaction_metadata::getId() const {
    return m_id;
}
void OAIModalSubmitInteractionMetadataResponse_triggering_interaction_metadata::setId(const QString &id) {
    m_id = id;
    m_id_isSet = true;
}

bool OAIModalSubmitInteractionMetadataResponse_triggering_interaction_metadata::is_id_Set() const{
    return m_id_isSet;
}

bool OAIModalSubmitInteractionMetadataResponse_triggering_interaction_metadata::is_id_Valid() const{
    return m_id_isValid;
}

qint32 OAIModalSubmitInteractionMetadataResponse_triggering_interaction_metadata::getType() const {
    return m_type;
}
void OAIModalSubmitInteractionMetadataResponse_triggering_interaction_metadata::setType(const qint32 &type) {
    m_type = type;
    m_type_isSet = true;
}

bool OAIModalSubmitInteractionMetadataResponse_triggering_interaction_metadata::is_type_Set() const{
    return m_type_isSet;
}

bool OAIModalSubmitInteractionMetadataResponse_triggering_interaction_metadata::is_type_Valid() const{
    return m_type_isValid;
}

QMap<QString, QString> OAIModalSubmitInteractionMetadataResponse_triggering_interaction_metadata::getAuthorizingIntegrationOwners() const {
    return m_authorizing_integration_owners;
}
void OAIModalSubmitInteractionMetadataResponse_triggering_interaction_metadata::setAuthorizingIntegrationOwners(const QMap<QString, QString> &authorizing_integration_owners) {
    m_authorizing_integration_owners = authorizing_integration_owners;
    m_authorizing_integration_owners_isSet = true;
}

bool OAIModalSubmitInteractionMetadataResponse_triggering_interaction_metadata::is_authorizing_integration_owners_Set() const{
    return m_authorizing_integration_owners_isSet;
}

bool OAIModalSubmitInteractionMetadataResponse_triggering_interaction_metadata::is_authorizing_integration_owners_Valid() const{
    return m_authorizing_integration_owners_isValid;
}

QString OAIModalSubmitInteractionMetadataResponse_triggering_interaction_metadata::getInteractedMessageId() const {
    return m_interacted_message_id;
}
void OAIModalSubmitInteractionMetadataResponse_triggering_interaction_metadata::setInteractedMessageId(const QString &interacted_message_id) {
    m_interacted_message_id = interacted_message_id;
    m_interacted_message_id_isSet = true;
}

bool OAIModalSubmitInteractionMetadataResponse_triggering_interaction_metadata::is_interacted_message_id_Set() const{
    return m_interacted_message_id_isSet;
}

bool OAIModalSubmitInteractionMetadataResponse_triggering_interaction_metadata::is_interacted_message_id_Valid() const{
    return m_interacted_message_id_isValid;
}

OAIUserResponse OAIModalSubmitInteractionMetadataResponse_triggering_interaction_metadata::getUser() const {
    return m_user;
}
void OAIModalSubmitInteractionMetadataResponse_triggering_interaction_metadata::setUser(const OAIUserResponse &user) {
    m_user = user;
    m_user_isSet = true;
}

bool OAIModalSubmitInteractionMetadataResponse_triggering_interaction_metadata::is_user_Set() const{
    return m_user_isSet;
}

bool OAIModalSubmitInteractionMetadataResponse_triggering_interaction_metadata::is_user_Valid() const{
    return m_user_isValid;
}

QString OAIModalSubmitInteractionMetadataResponse_triggering_interaction_metadata::getOriginalResponseMessageId() const {
    return m_original_response_message_id;
}
void OAIModalSubmitInteractionMetadataResponse_triggering_interaction_metadata::setOriginalResponseMessageId(const QString &original_response_message_id) {
    m_original_response_message_id = original_response_message_id;
    m_original_response_message_id_isSet = true;
}

bool OAIModalSubmitInteractionMetadataResponse_triggering_interaction_metadata::is_original_response_message_id_Set() const{
    return m_original_response_message_id_isSet;
}

bool OAIModalSubmitInteractionMetadataResponse_triggering_interaction_metadata::is_original_response_message_id_Valid() const{
    return m_original_response_message_id_isValid;
}

OAIUserResponse OAIModalSubmitInteractionMetadataResponse_triggering_interaction_metadata::getTargetUser() const {
    return m_target_user;
}
void OAIModalSubmitInteractionMetadataResponse_triggering_interaction_metadata::setTargetUser(const OAIUserResponse &target_user) {
    m_target_user = target_user;
    m_target_user_isSet = true;
}

bool OAIModalSubmitInteractionMetadataResponse_triggering_interaction_metadata::is_target_user_Set() const{
    return m_target_user_isSet;
}

bool OAIModalSubmitInteractionMetadataResponse_triggering_interaction_metadata::is_target_user_Valid() const{
    return m_target_user_isValid;
}

QString OAIModalSubmitInteractionMetadataResponse_triggering_interaction_metadata::getTargetMessageId() const {
    return m_target_message_id;
}
void OAIModalSubmitInteractionMetadataResponse_triggering_interaction_metadata::setTargetMessageId(const QString &target_message_id) {
    m_target_message_id = target_message_id;
    m_target_message_id_isSet = true;
}

bool OAIModalSubmitInteractionMetadataResponse_triggering_interaction_metadata::is_target_message_id_Set() const{
    return m_target_message_id_isSet;
}

bool OAIModalSubmitInteractionMetadataResponse_triggering_interaction_metadata::is_target_message_id_Valid() const{
    return m_target_message_id_isValid;
}

bool OAIModalSubmitInteractionMetadataResponse_triggering_interaction_metadata::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_type_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_authorizing_integration_owners.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_interacted_message_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_user.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_original_response_message_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_target_user.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_target_message_id_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIModalSubmitInteractionMetadataResponse_triggering_interaction_metadata::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_id_isValid && m_type_isValid && m_authorizing_integration_owners_isValid && m_interacted_message_id_isValid && true;
}

} // namespace dc_rest
